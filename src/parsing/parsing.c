/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:28:36 by thsion            #+#    #+#             */
/*   Updated: 2024/07/05 16:44:36 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philosophers.h"

const char	*valid_arg(const char *nptr)
{
	int			i;
	const char	*nbr;
	int			count_nbr;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
		print_error_exit("No negative values ! ❌");
	if (!ft_isdigit(nptr[i]))
		print_error_exit("Only numbers please ! 🙏");
	nbr = &nptr[i];
	count_nbr = 0;
	while (ft_isdigit(nptr[i]))
		count_nbr++;
	if (count_nbr > 10)
		print_error_exit("Value too big ! 😨");
	return (nbr);
}

void	parsing_args(t_data *data, char **av)
{
	data->philo_nbr = ft_atol(av[1]);
	data->time_to_die = ft_atol(av[2]) * 1000;
	data->time_to_eat = ft_atol(av[3]) * 1000;
	data->time_to_sleep = ft_atol(av[4]) * 1000;
	if (data->time_to_die < 60000
		|| data->time_to_eat < 60000
		|| data->time_to_sleep < 60000)
		print_error_exit("Timestamps are too short ! 😥");
	if (av[5])
		data->meal_limit = ft_atol(av[5]);
	else
		data->meal_limit = -1;
}
