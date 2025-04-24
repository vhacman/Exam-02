/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:49:27 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:49:27 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
 * La funzione rev_print stampa una stringa al contrario.
 * Prima conta la lunghezza della stringa, poi stampa ciascun carattere
 * partendo dalla fine fino all'inizio.
 * Utilizza la funzione write per stampare i caratteri su standard output.
 */
void    rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	while (i > 0)
	{
		write(1, &str[i - 1], 1);
		i--;
	}
}

/*
 * La funzione main controlla se è stato passato esattamente un argomento da linea di comando.
 * Se sì, chiama la funzione rev_print per stampare l’argomento al contrario.
 * Alla fine, stampa sempre un carattere di newline per andare a capo.
 */
int main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	write(1, "\n", 1);
	return (0);
}
