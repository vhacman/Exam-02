/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:03:51 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:03:51 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un singolo carattere su stdout.
*/
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
** Applica la cifratura ROT13 al contenuto della stringa `str`.
**
** ROT13 sostituisce ogni lettera con quella che si trova 13 posizioni dopo
** nell'alfabeto, ciclicamente (la metà di 26 lettere).
**
** - Per lettere tra 'a' e 'm' o 'A' e 'M': aggiunge 13 al valore ASCII.
** - Per lettere tra 'n' e 'z' o 'N' e 'Z': sottrae 13 al valore ASCII.
** - I caratteri non alfabetici (numeri, simboli, spazi, ecc.) restano invariati.
**
** Ogni carattere trasformato viene stampato immediatamente su stdout.
*/
void    rot_13(char *str)
{
    int i = 0;

    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            ft_putchar(str[i] + 13);
        else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
            ft_putchar(str[i] - 13);
        else
            ft_putchar(str[i]);
        i++;
    }
}

/*
** Se viene passato un solo argomento da linea di comando,
** lo passa alla funzione rot_13 per cifrarlo e stamparlo.
** Alla fine, stampa sempre un newline.
**
** Esempio:
** Input:  ./a.out Hello
** Output: Uryyb
*/
int main(int ac, char **av)
{
    if(ac == 2)
        rot_13(av[1]);
    ft_putchar('\n');
    return(0);
}
