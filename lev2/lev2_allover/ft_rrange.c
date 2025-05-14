#include <stdlib.h>

int	count_size(int start, int end)
{
	int size = 0;

	if(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	return size;
}

void	fill_ascending(int *array, int end, int size)
{
	int i = 0;

	while(i < size)
	{
		array[i] = end + i;
		i++;
	}
}

void	fill_descending(int *array, int end, int size)
{
	int i = 0;
	
	while(i < size)
	{
		array[i] = end - i;
		i++;
	}
}

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int size = count_size(start, end);
	int *array = malloc(sizeof(int) * size);
	if(!array)
		return NULL;

	if(start <= end)
		fill_descending(array, end, size);
	else
		fill_ascending(array, end, size);
	return array;
}


// #include <stdio.h>

// int	main(void)
// {
// 	int *arr = ft_rrange(1, 3);
// 	int i = 0;

// 	while (i < 3)
// 		printf("%d\n", arr[i++]);
// 	return (0);
// }