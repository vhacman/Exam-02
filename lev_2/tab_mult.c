/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:32:28 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 00:32:28 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
 * Scrive un carattere su standard output.
 */
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * Scrive un numero intero su standard output.
 */
void    ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	ft_putchar(c);
}

/*
 * Converte una stringa numerica in un intero.
 * Assume che la stringa sia ben formata (solo numeri positivi).
 */
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	while(str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

/*
 * Stampa la tabellina di un numero da 1 a 9.
 */
void print_tab_mult(int num)
{
	int i = 1;

	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putchar('x');
		ft_putnbr(num);
		ft_putchar('=');
		ft_putnbr(i * num);
		ft_putchar('\n');
		i++;
	}
}
/*
 * Funzione principale:
 * - Se non ci sono argomenti, stampa una nuova riga.
 * - Altrimenti calcola e stampa la tabellina fino a 9.
 */
int main(int ac, char **av)
{
	if (ac == 2)
		print_tab_mult(ft_atoi(av[1]));
	else
		ft_putchar('\n');
	return(0);
}
