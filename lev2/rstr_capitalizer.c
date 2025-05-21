/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:21:01 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:21:01 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** rstr_capitalizer:
** Converte tutte le lettere di una stringa in minuscolo, tranne
** l’ultima lettera di ogni parola, che viene messa in maiuscolo.
**
** Una "parola" è definita come una sequenza di lettere separate
** da spazi, newline o fine stringa.
**
** 1. Se il carattere è una lettera maiuscola, lo converte in minuscola.
** 2. Se il carattere è una lettera minuscola E il carattere successivo
**    è spazio, newline o fine stringa, lo converte in maiuscola.
**
** Ogni carattere viene immediatamente stampato su stdout.
**
** Esempio:
** Input:  "HeLLo WoRLd"
** Output: "hellO worlD"
*/
void    rstr_capitalizer(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;

		if((str[i] >= 'a' && str[i] <= 'z') &&
		   (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;

		write(1, &str[i], 1);
		i++;
	}
}

/*
** Main:
** - Se non ci sono argomenti, stampa solo newline.
** - Altrimenti, applica `rstr_capitalizer` a ciascun argomento.
** - Ogni stringa trasformata viene seguita da newline.
**
** Esempio:
** ./a.out "sALUt lE MONDE" "TesT" →
** Output:
** saluT lE mondE
** tesT
*/
int	main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		write(1, "\n", 1);

	while (i < argc)
	{
		rstr_capitalizer(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
