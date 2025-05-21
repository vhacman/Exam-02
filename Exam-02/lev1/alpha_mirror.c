/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:05:48 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:05:48 by vhacman          ###   ########.fr       */
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
** Converte ogni lettera della stringa `str` nel suo "specchio alfabetico".
**
** - Per lettere minuscole ('a'–'z'):
**   ciascun carattere viene sostituito con la sua lettera opposta nell'alfabeto.
**   Esempi: 'a' ↔ 'z', 'b' ↔ 'y', 'c' ↔ 'x', ..., 'm' ↔ 'n'.
**
** - Per lettere maiuscole ('A'–'Z'):
**   stessa logica: 'A' ↔ 'Z', 'B' ↔ 'Y', ..., 'M' ↔ 'N'.
**
** - I caratteri non alfabetici non vengono modificati.
**
** La trasformazione si basa sulla somma costante tra estremi ('a' + 'z' o 'A' + 'Z')
** meno il valore del carattere corrente.
**
** Ogni carattere trasformato viene scritto immediatamente su stdout.
*/
void    alpha_mirror(char *str)
{
	int i = 0;
	while(str[i])
	{
		char c = str[i];
		if(c >= 'a' && c <= 'z')
			ft_putchar('a' + 'z' - c);
		else if(c >= 'A' && c <= 'Z')
			ft_putchar('A' + 'Z' - c);
		else
			ft_putchar(c);
		i++;
	}
}

/*
** Se il programma riceve un solo argomento, esegue la trasformazione
** alfabetica a specchio sulla stringa ricevuta. In ogni caso,
** stampa un newline finale.
**
** Esempio:
** Input:  ./a.out Hello
** Output: Svool
*/
int main(int ac, char **av)
{
	if(ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
}
