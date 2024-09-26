/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:30 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 14:36:05 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	size_t	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", count);
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			(*count)++;
		}
	}
}
