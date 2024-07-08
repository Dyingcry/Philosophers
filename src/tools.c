/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:57:13 by thsion            #+#    #+#             */
/*   Updated: 2024/07/05 17:52:40 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"

void	print_error_exit(char *error)
{
	printf("%s\n", error);
	exit(EXIT_FAILURE);
}
void	*safe_malloc(int bytes)
{
	
}