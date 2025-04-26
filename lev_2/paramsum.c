/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:54:17 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 22:54:17 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un numero intero su stdout usando solo write.
*/
void    ft_putnbr(int n)
{
    char c;

    if(n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write (1, &c, 1);
}

/*
** Stampa il numero di argomenti passati al programma (senza contare il nome).
*/
int main(int ac, char **av)
{
    (void)av; //non lo usiamo quindi lo dobbiamo silenziare
    ft_putnbr(ac - 1); // -1 perché non contiamo il nome
    write(1, "\n", 1);
    return (0);
}
