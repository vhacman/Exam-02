/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:06:34 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:06:34 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
** Programma che implementa una semplice calcolatrice da linea di comando.
**
** Accetta esattamente tre argomenti:
** - argv[1]: primo operando (intero)
** - argv[2]: operatore (uno tra '+', '-', '*', '/', '%')
** - argv[3]: secondo operando (intero)
**
** Esegue l'operazione specificata tra i due operandi e stampa il risultato
** come intero seguito da newline.
**
** Se il numero di argomenti non è 4 (incluso il nome del programma), stampa solo un newline.
*/
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);     // converte il primo argomento in intero
		int b = atoi(argv[3]);     // converte il terzo argomento in intero
		char c = argv[2][0];       // estrae il primo carattere dell'operatore

		if (c == '+')
			printf("%d\n", a + b);
		else if (c == '-')
			printf("%d\n", a - b);
		else if (c == '*')
			printf("%d\n", a * b);
		else if (c == '/')
			printf("%d\n", a / b);
		else if (c == '%')
			printf("%d\n", a % b);
	}
	else
		printf("\n");

	return 0;
}
