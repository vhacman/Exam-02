/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:22 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 19:43:22 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Salta tutti gli spazi (' ') e tabulazioni ('\t') a partire dall'indice i.
** Ritorna il nuovo indice in cui trova un carattere diverso da spazio o tab.
*/
int	skip_whitespaces(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

/*
** Calcola la lunghezza di una parola a partire dal primo carattere dato.
** Una parola è definita come una sequenza di caratteri senza spazi o tabulazioni.
** Ritorna la lunghezza della parola.
*/
int	ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
		i++;
	return (i);
}

/*
** Stampa le parole della stringa separate da un singolo spazio (' ').
** Elimina spazi e tabulazioni in eccesso all'inizio, tra le parole e alla fine.
** Scrive direttamente su stdout.
*/
void	epur_str(char *str)
{
	int i = 0;
	int first_word = 1;
	int word_len;

	i = skip_whitespaces(str, i);
	while (str[i] != '\0')
	{
		if (first_word == 0)
			write (1, " ", 1);
		word_len = ft_wordlen(str + i);
		write(1, str + i, word_len);
		i = i + word_len;
		first_word = 0;
		i = skip_whitespaces(str, i);
	}
}

/*
** Funzione principale.
** Se viene passato esattamente un argomento (oltre il nome del programma),
** chiama epur_str sull'argomento.
** Alla fine stampa un newline.
*/
int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return(0);
}
