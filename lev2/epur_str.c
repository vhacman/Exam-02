/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:16:20 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:16:20 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Ritorna 1 se il carattere `c` è uno spazio, una tabulazione o un newline.
** Altrimenti ritorna 0.
*/
int is_delimiter(char c)
{
	return(c == ' ' || c == '\n' || c == '\t');
}

/*
** Salta tutti i caratteri di spaziatura (spazi, tab, newline) 
** a partire dalla posizione `i` nella stringa `str`.
** Ritorna la prima posizione non delimitata.
*/
int skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return (i);
}

/*
** Stampa una parola (sequenza di caratteri non delimitatori) a partire da `str[i]`.
** Ritorna l'indice successivo alla parola stampata.
*/
int print(char *str, int i)
{
	while(str[i] && !is_delimiter(str[i]))
		write(1, &str[i++], 1);
	return(i);
}

/*
** epur_str elimina gli spazi superflui e stampa le parole separate da un solo spazio.
**
** 1. Salta eventuali spazi iniziali.
** 2. Per ogni parola:
**    - Se non è la prima, stampa uno spazio prima della parola.
**    - Stampa la parola.
**    - Salta gli spazi successivi.
**
** Non modifica la stringa originale. Stampa diretta su stdout.
**
** Esempio:
** Input:  "   questo   è   un test\t\n"
** Output: "questo è un test"
*/
void    epur_str(char *str)
{
	int i = 0;
	int first = 0;

	i = skip_space(str, i);
	while(str[i])
	{
		if(first)
			write(1, " ", 1);
		i = print(str, i);
		first = 1;
		i = skip_space(str, i);
	}
}

/*
** Main:
** Se viene passato un solo argomento, esegue `epur_str`.
** In ogni caso, stampa un newline alla fine.
*/
int main(int ac, char **av)
{
	if(ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return(0);
}
