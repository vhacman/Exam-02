/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:15:13 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:15:13 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Programma che verifica se `av[1]` è una subsequenza di `av[2]`.
**
** Una subsequenza mantiene l'ordine dei caratteri ma non richiede
** che siano consecutivi.
**
** Funzionamento:
** 1. Scorre `av[2]` confrontando ogni carattere con il carattere corrente di `av[1]`.
**    - Se i caratteri coincidono, avanza nel confronto di `av[1]`.
**    - Continua a scorrere `av[2]` fino alla fine.
**
** 2. Se l'intera `av[1]` è stata consumata (i == strlen(av[1])),
**    allora `av[1]` è contenuta in ordine in `av[2]` → viene stampata.
**
** 3. In tutti i casi viene stampato un newline finale.
**
** Esempi:
** ./a.out "abc" "a1b2c3"  → stampa "abc"
** ./a.out "abc" "acb"     → non stampa nulla
*/
int main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		int j = 0;

		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}

		if (av[1][i] == '\0')
		{
			i = 0;
			while (av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}

	write(1, "\n", 1);
	return (0);
}
