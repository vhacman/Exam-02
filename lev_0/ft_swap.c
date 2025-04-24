/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:50:56 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:50:56 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>  

/*
 * La funzione ft_swap scambia i valori di due variabili intere.
 * Riceve come parametri i puntatori agli interi da scambiare.
 * Utilizza una variabile temporanea per effettuare lo scambio.
 */
void    ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
 * La funzione main serve per testare il funzionamento di ft_swap.
 * Crea due interi, n1 e n2, inizializzati rispettivamente a 9 e 6.
 * Crea due puntatori che puntano a questi interi.
 * Prima dello scambio, stampa i valori puntati.
 * Dopo aver chiamato ft_swap, stampa i valori aggiornati, che risultano invertiti.
 */
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	n1;
	int	n2;

	n1 = 9;
	n2 = 6;
	a = &n1;
	b = &n2;

	printf("Value of n1 is: %u and the value of n2 is: %u.", *a, *b);

	ft_swap(a, b);

	printf("\n");
	printf("Now the value of n1 is: %u and the value of n2 is: %u.", *a, *b);
	printf("\n");
}
*/
