/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:49:53 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:49:53 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
 * La funzione repeat_alpha stampa ogni lettera della stringa ricevuta come argomento
 * ripetuta un numero di volte pari alla sua posizione nell'alfabeto.
 * Ad esempio: 'a' viene stampata 1 volta, 'b' 2 volte, ..., 'z' 26 volte.
 * Lo stesso vale per le lettere maiuscole: 'A' → 1 volta, 'B' → 2 volte, ecc.
 * I caratteri non alfabetici vengono stampati una sola volta senza modifica.
 * La stampa viene effettuata direttamente su standard output tramite write.
 */
void    repeat_alpha(char *str)
{
	int i;
	char c;
	int repeat;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		repeat = 1;

		if (c >= 'a' && c <= 'z')
			repeat = c - 'a' + 1;
		else if (c >= 'A' && c <= 'Z')
			repeat = c - 'A' + 1;

		while (repeat--)
			write(1, &c, 1);
		i++;
	}
}

/*
 * La funzione main verifica che sia stato passato esattamente un argomento da linea di comando.
 * Se sì, chiama la funzione repeat_alpha per elaborarlo e stamparlo.
 * Alla fine stampa sempre un carattere di newline per andare a capo.
 */
int main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}
