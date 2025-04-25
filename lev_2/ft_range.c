/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:54:28 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 21:54:28 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** Calcola quanti elementi servono nell'array,
** includendo sia start che end.
*/
int	count_size(int start, int end)
{
	if (start <= end)
		return (end - start + 1);
	else
		return (start - end + 1);
}

/*
** Riempie l'array in ordine crescente da start a end.
*/
void	fill_ascending(int *array, int start, int size)
{
	int	i = 0;

	while (i < size)
	{
		array[i] = start + i;
		i++;
	}
}

/*
** Riempie l'array in ordine decrescente da start a end.
*/
void	fill_descending(int *array, int start, int size)
{
	int	i = 0;

	while (i < size)
	{
		array[i] = start - i;
		i++;
	}
}

/*
** Alloca e riempie un array con valori da start a end (inclusi).
** Usa malloc. L'ordine dipende da start e end.
*/
int	*ft_range(int start, int end)
{
	int	size;
	int	*array;

	size = count_size(start, end);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	if (start <= end)
		fill_ascending(array, start, size);
	else
		fill_descending(array, start, size);
	return(array);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	int	arr_len;
// 	int	*arr;
// 	int i = 0;

// 	arr_len = count_size(atoi(av[1]), atoi(av[2]));
// 	arr = ft_range(atoi(av[1]), atoi(av[2]));
// 	if (!arr)
// 		return (1);
// 	while (i < arr_len)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (EXIT_SUCCESS);
// }
