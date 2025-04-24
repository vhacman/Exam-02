/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:37:00 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 22:37:00 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
 * Converte da camel a snake_Case e stampa
 */
void    snake_to_camel(char *str)
{
    int     i;
    char    c;
    int     upper = 0;

    i = 0;
    while (str[i])
    {
        c = str[i];
        if (c == '_')
            upper = 1;
        else 
        {
            if (upper && c >= 'a' && c <= 'z')
				ft_putchar(c - 32); // minuscola ➜ MAIUSCOLA
			else
				ft_putchar(c);
			upper = 0;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        snake_to_camel(av[1]);
    ft_putchar('\n');
    return (0);
}
