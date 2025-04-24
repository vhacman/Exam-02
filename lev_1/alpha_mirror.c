/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:46:42 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 15:46:42 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Stampa un singolo carattere su stdout
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * Prende una stringa e stampa la sua versione "a specchio"
 */
void	alpha_mirror(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c = 'a' + ('z' - c);
		else if (c >= 'A' && c <= 'Z')
			c = 'A' + ('Z' - c);
		ft_putchar(c);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
	return (0);
}
