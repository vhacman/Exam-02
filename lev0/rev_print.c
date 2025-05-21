/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:03:22 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:03:22 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Funzione main che stampa l'argomento passato da linea di comando al contrario.
**
** 1. Se viene passato esattamente un argomento (ac == 2), calcola
**    la lunghezza della stringa av[1] contando i caratteri fino al '\0'.
**
** 2. Dopo aver ottenuto la lunghezza, decrementa l'indice `i` e stampa
**    ogni carattere in ordine inverso (dall'ultimo al primo).
**
** 3. In ogni caso, stampa un newline alla fine.
**
** Esempio:
** Input: ./a.out hello
** Output: olleh
*/
int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while(av[1][i])
            i++;

        while(i--)
            write(1, &av[1][i], 1);
    }
    write(1, "\n", 1);
    return 0;
}
