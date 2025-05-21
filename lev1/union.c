/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:14:53 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:14:53 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Stampa i caratteri unici della stringa `s`, nell'ordine in cui appaiono,
** evitando ripetizioni usando la tabella `seen`.
**
** `seen` è un array di 256 elementi (uno per ogni valore ASCII possibile),
** inizializzato a 0. Quando un carattere viene stampato, viene segnato come
** visto (seen[c] = 1), impedendo ulteriori stampe dello stesso carattere.
**
** L'output è diretto su stdout.
*/
void	print_unique(char *s, char *seen)
{
	int i = 0;
	while(s[i])
	{
		if(!seen[(unsigned char)s[i]])
		{
			seen[(unsigned char)s[i]] = 1;
			write(1, &s[i], 1);
		}
		i++;
	}
}

/*
** Programma che stampa l'unione dei caratteri unici delle due stringhe
** `av[1]` e `av[2]`, nell'ordine di apparizione e senza ripetizioni.
**
** Se il numero di argomenti è esattamente 3, chiama `print_unique` su
** entrambe le stringhe, riutilizzando la stessa tabella `seen`.
** Stampa un newline alla fine in ogni caso.
**
** Esempio:
** ./a.out "abc" "bcd" → abcd
*/
int	main(int ac, char **av)
{
	char seen[256] = {0};

	if(ac == 3)
	{
		print_unique(av[1], seen);
		print_unique(av[2], seen);
	}
	write(1, "\n", 1);
	return 0;
}
