/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:22:15 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:22:15 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un carattere su stdout.
*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
** Scrive un intero positivo `n` su stdout cifra per cifra.
*/
void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

/*
** Converte una stringa numerica in intero positivo.
** Interrompe la lettura al primo carattere non numerico.
*/
int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res;
}

/*
** Stampa la tabellina del numero `n` da 1 a 9 nel formato:
** i x n = risultato
** Usando esclusivamente ft_putchar.
*/
void print_tab_mult(int n)
{
    int i = 1;

    while (i < 10)
    {
        ft_putnbr(i);
        ft_putchar(' ');
        ft_putchar('x');
        ft_putchar(' ');
        ft_putnbr(n);
        ft_putchar(' ');
        ft_putchar('=');
        ft_putchar(' ');
        ft_putnbr(i * n);
        ft_putchar('\n');
        i++;
    }
}

/*
** Main:
** Se riceve un solo argomento, stampa la tabellina del numero.
** Altrimenti stampa solo newline.
*/
int main(int ac, char **av)
{
    if (ac == 2)
        print_tab_mult(ft_atoi(av[1]));
    else
        ft_putchar('\n');
    return 0;
}
