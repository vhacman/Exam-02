/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:04:57 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:04:57 by vhacman          ###   ########.fr       */
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
** Inverte il case (maiuscolo/minuscolo) di ogni lettera nella stringa `str`.
**
** - Se il carattere è una lettera minuscola ('a'–'z'), viene convertita
**   in maiuscola sottraendo 32 (valore fisso tra 'a' e 'A' in ASCII).
**
** - Se è una lettera maiuscola ('A'–'Z'), viene convertita in minuscola
**   aggiungendo 32.
**
** - Tutti gli altri caratteri (numeri, simboli, spazi, ecc.) vengono stampati
**   senza modifiche.
**
** Ogni carattere trasformato viene scritto su stdout immediatamente.
*/
void    ulstr(char *str)
{
    int i = 0;

    while(str[i])
    {
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            ft_putchar(c - 32);
        else if(c >= 'A' && c <= 'Z')
            ft_putchar(c + 32);
        else
            ft_putchar(c);
        i++;
    }
}

/*
** Se viene passato un solo argomento, esegue la trasformazione ulstr
** (inversione di maiuscole/minuscole) e stampa il risultato.
** In ogni caso, stampa un newline alla fine.
**
** Esempio:
** Input:  ./a.out HeLLo42
** Output: hEllO42
*/
int main(int ac, char **av)
{
    if (ac == 2)
        ulstr(av[1]);
    ft_putchar('\n');
    return(0);
}
