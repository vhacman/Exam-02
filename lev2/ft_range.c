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

// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		int start = atoi(argv[1]);
// 		int end = atoi(argv[2]);
// 		int size = count_size(start, end);
// 		int *array = ft_range(start, end);

// 		if (!array)
// 			return 1;

// 		for (int i = 0; i < size; i++)
// 			printf("%d ", array[i]);
// 		printf("\n");

// 		free(array);
// 	}
// 	return 0;
// }