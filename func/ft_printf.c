/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:16 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 14:51:25 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_aux(va_list args, const char type, int *count)
{
	if (type == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (type == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (type == 'p')
		ft_putptr(va_arg(args, void *), count);
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (type == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (type == 'x')
		ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", count);
	else if (type == 'X')
		ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	else if (type == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*ch;
	int			count;

	va_start(args, str);
	count = 0;
	if (str == NULL)
		return (-1);
	ch = str;
	while (*ch != '\0')
	{
		if (*ch == '%')
		{
			ch++;
			if (*ch != '\0')
				ft_printf_aux(args, *ch, &count);
		}
		else
			ft_putchar(*ch, &count);
		ch++;
	}
	va_end(args);
	return (count);
}
