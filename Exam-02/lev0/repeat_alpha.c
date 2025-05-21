/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:03:13 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:03:13 by vhacman          ###   ########.fr       */
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
** Scorre la stringa `str` e per ogni carattere esegue:
**
** - Se il carattere è una lettera minuscola ('a'–'z'), viene ripetuto
**   un numero di volte pari alla sua posizione nell'alfabeto.
**   Esempio: 'a' → 1 volta, 'b' → 2 volte, ..., 'z' → 26 volte.
**
** - Se il carattere è una lettera maiuscola ('A'–'Z'), stessa logica:
**   'A' → 1 volta, 'B' → 2 volte, ..., 'Z' → 26 volte.
**
** - Qualsiasi altro carattere (numeri, simboli, spazi, ecc.) viene stampato una sola volta.
**
** Ogni ripetizione viene eseguita scrivendo direttamente su stdout
** con `write(1, &str[i], 1)`.
*/
void    repeat_alpha(char *str)
{
    int i = 0;
    int k = 1;

    while(str[i])
    {
        k = 1;

        // Calcola il numero di ripetizioni per lettere minuscole
        if(str[i] >= 'a' && str[i] <= 'z')
            k = str[i] - 'a' + 1;

        // Calcola il numero di ripetizioni per lettere maiuscole
        if(str[i] >= 'A' && str[i] <= 'Z')
            k = str[i] - 'A' + 1;

        // Stampa il carattere k volte
        while(k--)
            write(1, &str[i], 1);

        i++;
    }
}

/*
** Punto di ingresso del programma.
** Se viene fornito un solo argomento da linea di comando (ac == 2),
** lo passa alla funzione repeat_alpha per eseguire la stampa ripetuta.
** In ogni caso, stampa un newline finale.
*/
int main(int ac, char **av)
{
    if(ac == 2)
        repeat_alpha(av[1]);
    ft_putchar('\n');
    return(0);
}
