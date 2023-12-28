#include "ft_printf.h"

void	ft_printf_aux(va_list *args, const char type)
{
	if (type == 'c')
		ft_putchar(va_arg(*args, int));
	else if (type == 's')
		ft_putstr(va_arg(*args, char *));
	else if (type == 'p')
		ft_putptr(va_arg(*args, void *));
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(*args, int));
	else if (type == 'u')
		ft_putunbr(va_arg(*args, unsigned int));
	else if (type == 'x')
		ft_puthex(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		ft_puthex(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		ft_putchar('%');
}
//cambiar a int y sacar el return value
void	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*ch;
	const char	*nextarg;
	char		type;

	va_start(args, str);
	ch = va_arg(args, const char *);
	while (*ch != '\0')
	{
		if (*ch == '%')
		{
			type = *(ch + 1);
			ft_printf_aux(&args, type);
		}
		else
			ft_putchar(*ch);
		ch++;
	}
	va_end(args);
}