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

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_printed(char *str, char c, int pos)
{
    int i = 0;

    while(i < pos)
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

void    inter(char *s1, char *s2)
{
    int i = 0;
    int k = 0;

    while(s1[i])
    {
        k = 0;
        while(s2[k])
        {
            if(s1[i] == s2[k])
            {
                if(!is_printed(s1, s1[i], i))
                    ft_putchar(s1[i]);
                break;
            }
            k++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 3)
        inter(av[1], av[2]);
    ft_putchar('\n');
    return(0);
}