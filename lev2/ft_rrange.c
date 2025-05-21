/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:18:25 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:18:25 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Calcola la dimensione dell'intervallo tra `start` e `end`, inclusivo.
** Ritorna il numero di elementi da allocare.
*/
int count_size(int start, int end)
{
	int size = 0;
	if(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	return size; 
}

/*
** Riempie l'array in ordine crescente a partire da `end`.
** Usato quando start > end.
** Esempio: ft_rrange(5, 3) → array = [3, 4, 5]
*/
void fill_ascending(int *array, int end, int size)
{
	int i = 0;
	while(i < size)
	{
		array[i] = end + i;
		i++;
	}
}

/*
** Riempie l'array in ordine decrescente a partire da `end`.
** Usato quando start <= end.
** Esempio: ft_rrange(3, 5) → array = [5, 4, 3]
*/
void fill_descending(int *array, int end, int size)
{
	int i = 0;
	while(i < size)
	{
		array[i] = end - i;
		i++;
	}
}

/*
** Crea e restituisce un array di interi da `end` a `start`, inclusi.
**
** - Se start <= end, riempie l'array in ordine decrescente da end a start.
** - Se start > end, riempie in ordine crescente da end a start.
**
** La funzione alloca memoria dinamicamente.
** Ritorna NULL se la malloc fallisce.
**
** Esempi:
** ft_rrange(3, 5) → [5, 4, 3]
** ft_rrange(5, 3) → [3, 4, 5]
*/
int *ft_rrange(int start, int end)
{
	int size = count_size(start, end);
	int	*array = malloc(sizeof(int) * size);

	if (!array)
		return NULL;
	if(start <= end)
		fill_descending(array, end, size);
	else
		fill_ascending(array, end, size);
	return array;
}

/*
** // Test:
** #include <stdio.h>
** int	main()
** {
** 	int i = 0;
** 	int *array = ft_rrange(3, 5);
** 	int size = count_size(3, 5);
**
** 	while(i < size)
** 	{
** 		printf("%d ", array[i]);
** 		i++;
** 	}
** 	return(0);
** }
*/
