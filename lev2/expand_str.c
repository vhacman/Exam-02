/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:16:51 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:16:51 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Ritorna 1 se `c` è uno spazio, una tabulazione o un newline.
** Serve per identificare i delimitatori tra parole.
*/
int is_delimiter(char c)
{
	return(c == ' ' || c == '\n' || c == '\t');
}

/*
** Salta i caratteri di spaziatura partendo dall'indice `i` della stringa `str`.
** Ritorna la posizione del primo carattere non delimitatore.
*/
int skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

/*
** Stampa una parola (sequenza di caratteri non delimitatori) a partire da `str[i]`.
** Ritorna l'indice successivo alla parola stampata.
*/
int print(char *str, int i)
{
	while(str[i] && !is_delimiter(str[i]))
		write(1, &str[i++], 1);
	return i;
}

/*
** `expand_str` riformatta una stringa eliminando gli spazi superflui
** e inserendo **esattamente tre spazi** tra ogni parola.
**
** 1. Salta eventuali spazi iniziali.
** 2. Per ogni parola:
**    - Se non è la prima, stampa "   " (3 spazi) prima della parola.
**    - Stampa la parola.
**    - Salta gli spazi successivi.
**
** Esempio:
** Input:  "   this   is\ta test\n"
** Output: "this   is   a   test"
*/
void expand_str(char *str)
{
	int i = 0;
	int first = 0;

	i = skip_space(str, i);
	while(str[i])
	{
		if(first)
			write(1, "   ", 3);
		i = print(str, i);
		first = 1;
		i = skip_space(str, i);
	}
}

/*
** Main:
** Se viene passato un solo argomento, lo riformatta con `expand_str`.
** In ogni caso stampa un newline finale.
*/
int main(int ac, char **av)
{
	if(ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
