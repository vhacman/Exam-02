/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:24:45 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:24:45 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
** Verifica se un numero `n` è primo.
** Ritorna 1 se primo, 0 altrimenti.
** Nota: non ottimizzato (prova tutti i valori da 2 a n-1).
*/
int is_prime(int n)
{
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

/*
** Scrive il numero intero `n` su stdout, usando solo write.
** Funziona solo per numeri >= 0.
*/
void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

/*
** Stampa la scomposizione in fattori primi del numero contenuto nella stringa `str`.
**
** Algoritmo:
** 1. Converte la stringa in intero con `atoi`.
** 2. Inizia da `factor = 2`.
** 3. Se `factor` divide `n` ed è primo:
**    - stampa `factor`, preceduto da `*` se non è il primo.
**    - divide `n` per `factor` e continua con lo stesso fattore.
** 4. Se non divide, passa al fattore successivo.
**
** Caso speciale: se n == 1, stampa "1".
**
** Esempi:
** fprime("18") → "2*3*3"
** fprime("13") → "13"
*/
void fprime(char *str)
{
	int n = atoi(str);
	int factor = 2;
	int first = 0;

	if (n == 1)
	{
		write(1, "1", 1);
		return;
	}

	while (factor <= n)
	{
		if (n % factor == 0 && is_prime(factor))
		{
			if (first)
				write(1, "*", 1);
			ft_putnbr(factor);
			first = 1;
			n = n / factor;
		}
		else
			factor++;
	}
}

/*
** Main:
** - Se riceve un solo argomento, esegue la scomposizione in fattori primi.
** - In ogni caso, stampa newline finale.
*/
int main(int ac, char **av)
{
	if (ac == 2)
		fprime(av[1]);
	write(1, "\n", 1);
	return 0;
}
