/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:18:51 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 19:18:51 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Funzione per controllare se un carattere è già stato stampato
int is_printed(char c, char *str, int pos)
{
    int i = 0;
    
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

// Funzione per controllare se un carattere esiste nella seconda stringa
int in_second_string(char c, char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main (int ac, char **av)
{
    int     i;
    char    current;
    char    *second;
    char    *first;

    i = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            current = av[1][i];
            second = av[2];
            first = av[1];
            if (in_second_string(current, second) &&
                !is_printed(current, first, i))
                write(1, &current, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
