/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:53:38 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 20:53:38 by vhacman          ###   ########.fr       */
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
	int i = 0;

	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
		i++;
	return (i);
}

/*
** Stampa le parole della stringa separate da tre spazi ("   ").
** Ignora spazi e tabulazioni in eccesso all'inizio, tra le parole e alla fine.
** Scrive direttamente su stdout.
*/
void	expand_str(char *str)
{
	int i = 0;
	int first_word = 1;
	int word_len;

	i = skip_whitespaces(str, i);
	while(str[i] != '\0')
	{
		if(first_word == 0)
			write(1, "   ", 3);
		word_len = ft_wordlen(str + i);
		write(1, str + i, word_len);
		i = i + word_len;
		first_word = 0;
		i = skip_whitespaces(str, i);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return (0);
}