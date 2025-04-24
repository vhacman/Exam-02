/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:52:38 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:52:38 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * La funzione ft_putchar stampa un singolo carattere su standard output
 * utilizzando la funzione write.
 */
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * La funzione ft_putnbr stampa un numero intero positivo su standard output.
 * Utilizza la ricorsione per stampare le cifre una alla volta, partendo dalla più significativa.
 * Ogni cifra viene convertita in carattere aggiungendo '0'.
 * Nota: non gestisce i numeri negativi.
 */
void    ft_putnbr(int n)
{
	char c;
	
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	ft_putchar(c);
}

/*
 * La funzione fizz_buzz stampa i numeri da 1 a 100 secondo le seguenti regole:
 * - Se il numero è multiplo di 3, stampa "fizz".
 * - Se è multiplo di 5, stampa "buzz".
 * - Se è multiplo sia di 3 che di 5, stampa "fizzbuzz".
 * - Altrimenti, stampa semplicemente il numero.
 * Dopo ogni output, stampa un carattere di newline.
 */
void    fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
}

/*
 * La funzione main chiama la funzione fizz_buzz per eseguire la stampa dei numeri da 1 a 100.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
