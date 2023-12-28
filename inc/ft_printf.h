#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_puthex(int n, char *base);
void	ft_putnbr(int n);
void	ft_putptr(void *ptr);
void	ft_putstr(char *str);
void	ft_putunbr(unsigned int	n);

#endif

