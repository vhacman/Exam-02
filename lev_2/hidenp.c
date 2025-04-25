/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:28:43 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 22:28:43 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Ritorna 1 se s1 è nascosta in s2, altrimenti 0.
** Verifica se tutti i caratteri di s1 appaiono in s2 nello stesso ordine.
*/
int is_hidden(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while(s1[i] && s2[j])
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    return (s1[i] == '\0');
}

/*
 * Controlla il numero di argomenti e usa is_hidden
 * per determinare il risultato.
 */
int main(int ac, char **av)
{
    char    *s1 = av[1];
    char    *s2 = av[2];

    if (ac == 3)
    {
        if(is_hidden(s1, s2))
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "\n", 1);
    return(0);
}
