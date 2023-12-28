#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int r1;
	int r2;

	char c = 'c';
	char *s = "str";
	int d = 1;
	int i = -2;
	//int *p = &i;
	unsigned int u = 3;
	int x = 111;
	int X = 222;

	r1 = printf("solo texto\n");
	r2 = ft_printf("solo texto\n");
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");

	r1 = printf("char:%c.\n", c);
	r2 = ft_printf("char:%c.\n", c);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");
	
	r1 = printf("str:%s.\n", s);
	r2 = ft_printf("str:%s.\n", s);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");

	r1 = printf("dec:%d.\n", d);
	r2 = ft_printf("dec:%d.\n", d);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");

	r1 = printf("int:%i.\n", i);
	r2 = ft_printf("int:%i.\n", i);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");

	/*r1 = printf("ptr:%p.\n", p);
	r2 = ft_printf("ptr:%p.\n", p);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");*/

	r1 = printf("uns:%u.\n", u);
	r2 = ft_printf("uns:%u.\n", u);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");
	
	r1 = printf("hexa1:%x.\n", x);
	r2 = ft_printf("hexa1:%x.\n", x);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");

	r1 = printf("hexa2:%X.\n", X);
	r2 = ft_printf("hexa2:%X.\n", X);
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");

	r1 = printf("percent:%%.\n");
	r2 = ft_printf("percent:%%.\n");
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");

	/*r1 = printf("endper%");
	r2 = ft_printf("endper%");
	if (r1 == r2)
		printf("return values coinciden\n");
	else
		printf("return values no coinciden\n");*/

	return 0;
}