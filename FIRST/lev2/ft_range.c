#include <unistd.h>
#include <stdlib.h>

int count_size(int start, int end)
{
	int size = 0;
	if(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	return(size);
}

void    fill_ascending(int *array, int start, int size)
{
	int i = 0;
	while(i < size)
	{
		array[i] = start + i;
		i++;
	}
}

void    fill_descending(int *array, int start, int size)
{
	int i = 0;
	while(i < size)
	{
		array[i] = start - i;
		i++;
	}
}

int *ft_range(int start, int end)
{
	int *array;
	int size = count_size(start, end);
	int i = 0;

	array = malloc(sizeof(int) * size);
	if(!array)
		return NULL;
	if(start <= end)
		fill_ascending(array, start, size);
	else
		fill_descending(array, start, size);
	return(array);
}

/*
#include <stdio.h>
int main()
{
	int *array;
	int i = 0;

	array = ft_range(1, 3);
	while(i < 3)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return 0;
}
*/