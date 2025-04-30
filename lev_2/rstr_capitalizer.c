/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:41:30 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/30 18:41:30 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_letter(char c)
{
    return((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char    to_lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        c = c + 32;
    return(c);
}

char    to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return(c);
}

void    rstr_capitalizer(char *str)
{
    int i = 0;
    
    while(str[i])
    {
        char current = str[i];
        char next = str[i + 1];
        if(is_letter(current))
        {
            if(!is_letter(next))
                ft_putchar(to_upper(current));
            else
                ft_putchar(to_lower(current));
        }
        else
            ft_putchar(current);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
    {
        ft_putchar('\n');
        return(0);
    }
    while (i < ac)
    {
        rstr_capitalizer(av[i]);
        ft_putchar('\n');
        i++;
    }
    return(0);
}