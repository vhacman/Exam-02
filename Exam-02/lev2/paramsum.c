/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:19:28 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:19:28 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Stampa un intero positivo `n` su stdout.
** Usa ricorsione per stampare le cifre da sinistra a destra.
** Ogni cifra è convertita in carattere ASCII con + '0'.
**
** N.B.: Non gestisce numeri negativi.
*/
void ft_putnbr(int n)
{
	if(n >= 10) 
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

/*
** Main: stampa il numero di argomenti passati da linea di comando,
** escluso il nome del programma (quindi `ac - 1`).
**
** Esempio:
** ./a.out → stampa "0"
** ./a.out hello world → stampa "2"
*/
int main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return 0;
}
