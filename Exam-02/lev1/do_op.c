#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		char c = argv[2][0];
		if (c == '+')
			printf("%d\n", a + b );
		else if(c == '-')
			printf("%d\n", a - b);
		else if (c == '*')
			printf("%d\n", a * b);
		else if(c == '/')
			printf("%d\n", a / b);
		else if (c == '%')
			printf("%d\n", a % b);
	}
	else
		printf("\n");
	return 0;
}