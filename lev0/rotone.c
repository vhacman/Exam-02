/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:04:14 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:04:14 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un singolo carattere sullo standard output.
*/
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
** Applica una cifratura semplice alla stringa `str`, chiamata "rotone".
**
** - Ogni lettera alfabetica viene sostituita con quella successiva
**   nell'alfabeto. Esempi: 'a' → 'b', 'B' → 'C', 'y' → 'z'.
**
** - Se il carattere è 'z' o 'Z', ricomincia dall'inizio:
**   'z' → 'a', 'Z' → 'A'.
**
** - I caratteri non alfabetici (numeri, simboli, spazi, ecc.)
**   non vengono modificati.
**
** Ogni carattere trasformato viene immediatamente stampato su stdout.
*/
void    rotone(char *str)
{
    int i = 0;

    while(str[i])
    {
        char c = str[i];
        if(c >= 'a' && c <= 'y')
            ft_putchar(c + 1);
        else if(c >= 'A' && c <= 'Y')
            ft_putchar(c + 1);
        else if(c == 'z')
            ft_putchar('a');
        else if(c == 'Z')
            ft_putchar('A');
        else
            ft_putchar(c);
        i++;
    }
}

/*
** Se il programma riceve esattamente un argomento, esegue
** la trasformazione rotone su tale stringa e stampa il risultato.
** In ogni caso, stampa un newline alla fine.
**
** Esempio:
** Input:  ./a.out SalutZz!
** Output: TbmvuAa!
*/
int main(int ac, char **av)
{
    if (ac == 2)
        rotone(av[1]);
    ft_putchar('\n');
    return(0);
}
