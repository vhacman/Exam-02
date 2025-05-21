/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:12:09 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:12:09 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Stampa i caratteri comuni tra `s1` e `s2` una sola volta,
** mantenendo l'ordine di apparizione in `s1`.
**
** Utilizza un solo array `seen` di 256 elementi per:
** - Segnare i caratteri di `s1` già stampati
**
** Per ogni carattere `s1[i]`, scorre tutta `s2[j]`.
** Se trova una corrispondenza e il carattere non è stato stampato:
** - lo stampa
** - lo marca in `seen`
*/
void	inter(char *s1, char *s2)
{
	int i = 0;
	int j;
	char seen[256] = {0};

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && !seen[(unsigned char)s1[i]])
			{
				write(1, &s1[i], 1);
				seen[(unsigned char)s1[i]] = 1;
				break;
			}
			j++;
		}
		i++;
	}
}

/*
** Se riceve esattamente 2 argomenti da linea di comando,
** chiama `inter` per stampare i caratteri comuni.
** In ogni caso, stampa un newline finale.
*/
int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
