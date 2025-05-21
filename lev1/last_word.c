/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:12:48 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:12:48 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un singolo carattere su stdout.
*/
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Calcola e ritorna la lunghezza della stringa `str`.
*/
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

/*
** Ritorna 1 se il carattere `c` è uno spazio, tabulazione o newline,
** altrimenti ritorna 0.
*/
int is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

/*
** Stampa l'ultima parola presente nella stringa `str`.
**
** 1. Parte dalla fine della stringa ignorando eventuali spazi finali.
** 2. Quando trova un carattere non delimitatore, segna `end`.
** 3. Prosegue a ritroso finché trova il delimitatore precedente alla parola.
**    Il primo carattere non delimitatore dopo questo è l'inizio della parola.
** 4. Scrive la sottostringa da `start + 1` a `end` (incluso).
**
** Nessuna modifica della stringa originale. La stampa è diretta su stdout.
**
** Esempio:
** Input:  "  questo è un test  "
** Output: "test"
*/
void	last_word(char *str)
{
	int i = ft_strlen(str) - 1;

	while(str[i] && is_delimiter(str[i]))
		i--;
	int end = i;
	while(i >= 0 && !is_delimiter(str[i]))
		i--;
	int start = i;
	write(1, str + start + 1, end - start);
}

/*
** Se viene passato un solo argomento, stampa l'ultima parola della stringa.
** In ogni caso, stampa un newline finale.
*/
int main(int ac, char **av)
{
	if(ac == 2)
		last_word(av[1]);
	ft_putchar('\n');
	return 0;
}
