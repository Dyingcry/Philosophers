/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:17:39 by thsion            #+#    #+#             */
/*   Updated: 2024/07/05 16:41:37 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/philosophers.h"

long int	ft_atol(const char *nptr)
{
	int				i;
	long int		res;

	i = 0;
	nptr = valid_arg(nptr);
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	if (res > INT_MAX)
		print_error_exit("Value is too big ! 😨");
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	const char	*test = "    -+++-123456";

	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test));
	return (0);
}*/
