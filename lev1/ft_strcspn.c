/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:07:44 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:07:44 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** Implementazione della funzione standard `strcspn`.
**
** Ritorna il numero di caratteri consecutivi all'inizio della stringa `s`
** che **non** contengono **nessuno** dei caratteri presenti in `reject`.
**
** Scorre `s` da sinistra a destra:
** - Per ogni carattere `s[i]`, controlla se compare in `reject`.
** - Se lo trova, ritorna la posizione `i`.
** - Se non lo trova, continua.
**
** Se nessun carattere di `s` è contenuto in `reject`, ritorna la lunghezza di `s`.
**
** Esempio:
** s = "hello", reject = "aeiou" → ritorna 1 (perché 'e' ∈ reject)
** s = "12345", reject = "abc"   → ritorna 5
*/
size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return (i);
}
