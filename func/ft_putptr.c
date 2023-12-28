#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	ft_putstr("0x");
	ft_puthex((unsigned long)ptr, "0123456789abcdef");
}