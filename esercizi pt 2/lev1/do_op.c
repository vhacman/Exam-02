#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int    do_op(int num1, char *op, int num2)
{
	int res = 0;

	if(*op == '+')
		res = num1 + num2;
	if(*op == '-')
		res = num1 - num2;
	if(*op == '*')
		res = num1 * num2;
	if(*op == '/')
		res = num1 / num2;
	if(*op == '%')
        res = num1 % num2;
	return(res);
}

int	main(int ac, char **av)
{
	int num1;
	int num2;
	char *op;
	int res;
	if (ac == 4)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		op = av[2];
		res = do_op(num1, op, num2);
		printf("%d", res);
	}
	printf("\n");
	return(0);
}