/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:43:21 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 15:43:21 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Stampa un singolo carattere
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * Inverte il case delle lettere nella stringa
 * e le stampa una per una
 */
void	ulstr_print(char *str)
{
	int i = 0;
    char c;

	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')         // minuscola → maiuscola
			ft_putchar(c - 32);
		else if (c >= 'A' && c <= 'Z')    // maiuscola → minuscola
			ft_putchar(c + 32);
		else
			ft_putchar(c);
		i++;
	}
}

/*
 * Funzione principale: controlla gli argomenti e chiama ulstr_print
 */
int	main(int ac, char **av)
{
	if (ac == 2)
		ulstr_print(av[1]);
	ft_putchar('\n');
	return (0);
}
