/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:12:13 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 16:12:13 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
 * Converte da CamelCase a snake_case e stampa
 */
void    camel_to_snake(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i])
    {
        c = str[i];
        if (c >= 'A' && c <= 'Z')
        {
            ft_putchar('_');
            ft_putchar(c + 32);
        }
        else 
            ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        camel_to_snake(av[1]);
    ft_putchar('\n');
    return (0);
}
