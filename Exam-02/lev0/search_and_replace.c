/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:04:32 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:04:32 by vhacman          ###   ########.fr       */
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
** Scorre la stringa `str` e sostituisce ogni occorrenza del carattere `c1`
** con il carattere `c2`. Tutti gli altri caratteri restano invariati.
**
** Ogni carattere, modificato o meno, viene stampato subito su stdout.
**
** Esempio:
** str = "hello", c1 = 'l', c2 = 'x' → stampa "hexxo"
*/
void    search_and_replace(char *str, char c1, char c2)
{
    int i = 0;

    while(str[i])
    {
        char c = str[i];
        if(c == c1)
            ft_putchar(c = c2);
        else
            ft_putchar(c);
        i++;
    }
}

/*
** Il programma accetta esattamente tre argomenti:
** - av[1]: stringa da elaborare
** - av[2]: carattere da sostituire (c1)
** - av[3]: carattere sostitutivo (c2)
**
** Le condizioni av[2][1] == '\0' e av[3][1] == '\0'
** assicurano che il secondo e terzo argomento siano singoli caratteri.
**
** Se le condizioni sono soddisfatte, esegue la sostituzione e stampa il risultato.
** In ogni caso, stampa un newline alla fine.
**
** Esempio:
** Input:  ./a.out programming g G
** Output: proGramminG
*/
int main(int ac, char **av)
{
    if(ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
        search_and_replace(av[1], av[2][0], av[3][0]);
    ft_putchar('\n');
    return(0);
}
