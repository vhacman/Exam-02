/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:01:44 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:01:44 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un singolo carattere su stdout utilizzando la syscall write.
*/
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
** Stampa una stringa su stdout, carattere per carattere,
** usando la funzione ft_putchar. Termina quando trova '\0'.
*/
void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}

/*
** Funzione di test (commentata):
** Definisce una stringa e la stampa con ft_putstr.
*/
// int main(void)
// {
//     char *str = "la mamma\n";
//     ft_putstr(str);
//     return(0);
// }
