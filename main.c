#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int n = 23;
	printf("tengo %d anos\n", n);
	ft_printf("tengo %d anos\n", n);
	return 0;
}