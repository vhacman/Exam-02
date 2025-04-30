#include <stdlib.h>

int count_size(int start, int end)
{
    if (start <= end)
        return(end - start + 1);
    else
        return(start - end + 1);
}

void    fill_ascending(int *array, int start, int size)
{
    int i = 0;
    while(i <= size)
    {
        array[i] = start + i;
        i++;
    }
}

void    fill_descending(int *array, int start, int size)
{
    int i = 0;
    while (i <= size)
    {
        array[i] = start - i;
        i++;
    }
}

int *ft_range(int start, int end)
{
    int size = count_size(start, end);
    int *array = malloc(sizeof(int) * size);

    if(!array)
        return(NULL);
    if(start <= end)
        fill_ascending(array, start, size);
    else
        fill_descending(array, start, size);
    return(array);
}

