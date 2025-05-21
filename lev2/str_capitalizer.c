/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:21:17 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:21:17 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** str_capitalizer:
** Converte la prima lettera di ogni parola in maiuscolo e
** tutte le altre in minuscolo.
**
** Una parola è definita come una sequenza di lettere preceduta
** da uno spazio, tabulazione, newline o inizio stringa.
**
** Regole:
** - Ogni lettera maiuscola viene prima convertita in minuscola.
** - Poi, se la lettera è la prima della parola, viene convertita in maiuscola.
**
** Ogni carattere viene immediatamente scritto su stdout.
**
** Esempio:
** Input:  "hELLO\twORLD\nGOOD  day"
** Output: "Hello\tWorld\nGood  Day"
*/
void str_capitalizer(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		if((str[i] >= 'a' && str[i] <= 'z') &&
		   (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'))
			str[i] -= 32;

		write(1, &str[i], 1);
		i++;
	}
}

/*
** Main:
** - Se non ci sono argomenti, stampa solo newline.
** - Altrimenti, applica `str_capitalizer` a ciascun argomento.
** - Ogni stringa trasformata è seguita da newline.
**
** Esempio:
** ./a.out "heLLo woRLD" "gOOd\tday" →
** Output:
** Hello World
** Good	Day
*/
int main(int ac, char **av)
{
	int i = 1;

	if (ac == 1)
		write(1, "\n", 1);

	while(i < ac)
	{
		str_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
