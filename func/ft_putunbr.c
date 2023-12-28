#include "ft_printf.h"

void	ft_putunbr(unsigned int	n)
{
	char	c;

	if (n >= 10)
		ft_putunbr((n / 10));
	c = (n % 10) + '0';
	ft_putchar(c);
}