#include "ft_printf.h"

void	ft_putptr(void *ptr, int *count)
{
	ft_putstr("0x", count);
	ft_puthex((unsigned long)ptr, "0123456789abcdef", count);
}