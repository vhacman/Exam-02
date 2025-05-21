/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:01:23 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:01:23 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Stampa un numero intero positivo su stdout.
** Utilizza ricorsione per scomporre il numero in cifre.
** Ogni cifra è convertita in carattere ASCII aggiungendo '0'.
*/
void    ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

/*
** Stampa i numeri da 1 a 100 con le seguenti regole:
** - Se il numero è divisibile sia per 3 che per 5, stampa "fizzbuzz"
** - Se è divisibile solo per 3, stampa "fizz"
** - Se è divisibile solo per 5, stampa "buzz"
** - Altrimenti, stampa il numero stesso
** Ogni stampa è seguita da un newline.
*/
void    fizz_buzz(void)
{
    int n = 1;

    while(n <= 100)
    {
        if((n % 3 == 0) && (n % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if(n % 3 == 0)
            write(1, "fizz", 4);
        else if(n % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnbr(n);
        write(1, "\n", 1);
        n++;
    }
}

/*
** Funzione principale: richiama fizz_buzz per eseguire
** la stampa dei numeri secondo le regole descritte.
*/
int main(void)
{
    fizz_buzz();
    return(0);
}
