

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// int main(void)
// {
// 	int x = 10;
// 	int y = 42;

// 	printf("Prima dello swap: x = %d, y = %d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("Dopo lo swap:    x = %d, y = %d\n", x, y);

// 	return 0;
// }