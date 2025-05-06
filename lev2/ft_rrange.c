#include <stdlib.h>
#include<unistd.h>
#include <stdio.h>

int	count_size(int start, int end)
{
	int	size = 0;
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

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int size = count_size(start, end);
	int	*array = malloc(sizeof(int) * size);

	if (!array)
		return(NULL);
	if(start <= end)
		fill_descending(array, end, size);
	else
		fill_ascending(array, end, size);
	return(array);
}

// int	main()
// {
// 	int i = 0;
// 	int *array = ft_rrange(3, 5);
// 	int size = count_size(3, 5);

// 	while(i < size)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	return(0);
// }