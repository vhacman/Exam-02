/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:17:44 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 22:17:44 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** Calcola quanti elementi servono nell'array,
** includendo sia start che end.
*/
int count_size(int start, int end)
{
    if (start <= end)
        return (end - start + 1);
    else 
        return (start - end + 1);
}

/*
** Riempie l'array partendo da end e scendendo fino a start.
*/
void fill_ascending(int *array, int end, int size)
{
    int i = 0;

    while (i < size)
    {
        array[i] = end + i;
        i++;
    }
}

/*
** Riempie l'array partendo da end e salendo fino a start.
*/
void fill_descending(int *array, int end, int size)
{
    int i = 0;

    while (i < size)
    {
        array[i] = end - i;
        i++;
    }
}

/*
** Alloca e riempie un array con valori da end a start (inclusi).
** L'ordine è sempre da end a start.
*/
int *ft_rrange(int start, int end)
{
    int size;
    int *array;

    size = count_size(start, end);
    array = malloc(sizeof(int) * size);
    if (!array)
        return (NULL);
    if (start <= end)
        fill_descending(array, end, size);
    else
        fill_ascending(array, end, size);
    return (array);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: %s <start> <end>\n", argv[0]);
		return (1);
	}

	int	*arr;
	int	arr_len;
	int	i;

	arr_len = count_size(atoi(argv[1]), atoi(argv[2]));
	arr = ft_rrange(atoi(argv[1]), atoi(argv[2]));
	if (!arr)
		return (1);

	i = 0;
	while (i < arr_len)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	free(arr);
	return (0);
}
