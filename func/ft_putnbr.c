#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
		return;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr((n / 10), count);
	c = (n % 10) + '0';
	ft_putchar(c, count);
}