#include "ft_printf.h"

void	ft_puthex(int n, char *base)
{
	if (n >= 16)
	{
		ft_puthex((n / 16), base);
		n = n % 16;
	}
	ft_putchar(base[n]);
}