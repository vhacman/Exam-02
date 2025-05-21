/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:18:05 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:18:05 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** Calcola la dimensione dell'intervallo inclusivo tra `start` ed `end`.
** - Se start <= end: size = end - start + 1
** - Se start > end:  size = start - end + 1
*/
int count_size(int start, int end)
{
	int size = 0;
	if(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	return(size);
}

/*
** Riempie l'array con numeri crescenti da `start`.
** array[0] = start, array[1] = start + 1, ..., array[size - 1]
*/
void fill_ascending(int *array, int start, int size)
{
	int i = 0;
	while(i < size)
	{
		array[i] = start + i;
		i++;
	}
}

/*
** Riempie l'array con numeri decrescenti da `start`.
** array[0] = start, array[1] = start - 1, ..., array[size - 1]
*/
void fill_descending(int *array, int start, int size)
{
	int i = 0;
	while(i < size)
	{
		array[i] = start - i;
		i++;
	}
}

/*
** Crea e restituisce un array di interi compreso tra `start` e `end`
** inclusi, in ordine crescente o decrescente a seconda del valore.
**
** - Alloca memoria per l'intervallo.
** - Se start <= end → riempie in ordine crescente.
** - Se start > end  → riempie in ordine decrescente.
**
** Ritorna un puntatore all'array allocato.
** In caso di errore di allocazione, ritorna NULL.
*/
int *ft_range(int start, int end)
{
	int *array;
	int size = count_size(start, end);

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
** // Test:
** #include <stdio.h>
** int main()
** {
**     int *array;
**     int i = 0;
**
**     array = ft_range(1, 3);  // Output: 1 2 3
**     while(i < 3)
**     {
**         printf("%d\n", array[i]);
**         i++;
**     }
**     return 0;
** }
*/
