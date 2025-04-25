/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:36:18 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 23:36:18 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Converte una stringa in intero (solo positivi o zero).
*/
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

/*
** Stampa un intero in formato esadecimale minuscolo.
*/
void	print_hex(unsigned int n)
{
	char *base;
	char c;

	base = "0123456789abcdef";

	if(n >= 16)
		print_hex(n / 16);
	c = base[n % 16];
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}

