#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_puthex(int n, char *base, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putunbr(unsigned int	n, int *count);

#endif

