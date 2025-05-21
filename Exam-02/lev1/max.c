/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:13:10 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:13:10 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Restituisce il valore massimo all'interno dell'array `tab`
** di lunghezza `len`. Se `len` è zero, ritorna 0.
**
** 1. Se `len == 0`, ritorna immediatamente 0 (nessun elemento da confrontare).
** 2. Inizializza `max` al primo elemento dell'array.
** 3. Scorre l'intero array confrontando ogni elemento con `max`.
**    Se un elemento è maggiore, aggiorna `max`.
** 4. Al termine, ritorna il valore massimo trovato.
**
** Esempi:
** - max([4, 7, 2, 9, 5], 5)     → 9
** - max([-10, -3, -50, -1], 4) → -1
** - max([42], 1)               → 42
** - max([], 0)                 → 0
*/
int max(int *tab, unsigned int len)
{
	if(len == 0)
		return(0);

	int max = tab[0];
	unsigned int i = 0;

	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);
}

/*
** // Test della funzione:
** #include <stdio.h>
** int main(void)
** {
**     int a[] = {4, 7, 2, 9, 5};
**     int b[] = {-10, -3, -50, -1};
**     int c[] = {42};
**     int d[] = {};
**     
**     printf("Max a: %d\n", max(a, 5));     // 9
**     printf("Max b: %d\n", max(b, 4));     // -1
**     printf("Max c: %d\n", max(c, 1));     // 42
**     printf("Max d: %d\n", max(d, 0));     // 0
**
**     return 0;
** }
*/
