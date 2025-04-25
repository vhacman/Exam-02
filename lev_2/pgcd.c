/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:17:25 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 23:17:25 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
** Calcola il massimo comune divisore (MCD) di due numeri interi positivi.
*/
int gcd(int a, int b)
{
	int temp;

	while (b != 0)
	{
		temp = a % b; //diventa il resto della divisione tra a e b
		a = b;
		b = temp;
	}
	return (a); // quando b diventa 0 a contine il massimo comun divisore
}

int main(int ac, char **av)
{
	int a;
	int b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		// entrambi i numeri devono essere strettamente positivi
		if (a > 0 && b > 0)
			printf("%d", gcd(a, b));
		else
			printf("\n");
	}
	else
		printf("\n");
	return (0);
}
