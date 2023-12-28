#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	size_t	i;

	i = 0;
	if (!str)
		ft_putstr("(null)",count);	
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			(*count)++;
		}
	}
}
