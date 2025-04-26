/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:42:46 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 10:42:46 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* Write a program that takes a positive int and displays its prime factors on the
 * standard output, followed by a newline.
 * Factors must be displayed in ascending order and separated by '*', so that
 * the expression in the output gives the right result.
 * If the number of parameters is not 1, simply display a newline.
 * The input, when there is one, will be valid.*/

int is_prime(int n)
{
	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void    fprime(char *str)
{
	int n;
	int factor;
	int first;  //flag per capire se stiamo stampando il primo numero o no

	n = atoi(str);
	factor = 2;
	first = 1;
	//se n è 1 stampiamo 1 perché non ha numeri primi
	if (n == 1)
		printf("1");
	//finché factor è minore o uguale a n continuiamo a cercare fattori
	while (factor <= n)
	{
		//se factor divide esattamente n ed è un numero primo
		if (n % factor == 0 && is_prime(factor))
		{
			//se è il primo numero stampiamo solo il numero
			if ( first == 1)
				printf("%d", factor);
			else
				printf("*%d", factor); //se non è il primo mettiamo un * prima
			first = 0; //dopo aver stampato il primo numero aggiorniamo la flag per stampare *
			//quando abbiamo trovato un fattore e l'abbiamo stampato lo dobbiamo togliere a n, quindi dividiamo n per factori e aggiorniamo la n
			n = n / factor;
		}
		else
			factor++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(av[1]);
	printf("\n");
	return(0);
}
