/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:53:09 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:53:09 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * La funzione ft_putchar stampa un singolo carattere su standard output
 * utilizzando la funzione write.
 */
void ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * La funzione write_word prende una stringa e stampa la sua prima parola.
 * Una "parola" è definita come una sequenza di caratteri non spazi (' ') e non tabulazioni ('\t').
 * - Ignora eventuali spazi o tab iniziali.
 * - Poi stampa ogni carattere fino al primo spazio, tab o fine stringa.
 */
void write_word(char *str)
{
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
 * La funzione main controlla che venga passato esattamente un argomento da linea di comando.
 * Se sì, chiama la funzione write_word per stampare la prima parola dell'argomento.
 * Alla fine stampa sempre un carattere di newline per andare a capo.
 */
int main(int ac, char **av)
{
	if (ac == 2)
		write_word(av[1]);
	ft_putchar('\n');
	return (0);
}
