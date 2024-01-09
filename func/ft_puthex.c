/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:22 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 14:35:25 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long int n, char *base, int *count)
{
	if (n >= 16)
	{
		ft_puthex((n / 16), base, count);
		n = n % 16;
	}
	ft_putchar(base[n], count);
}
