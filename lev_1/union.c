/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:49:46 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 22:49:46 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Verifica se il carattere 'c' è già apparso nella
stringa 'str' fino alla posizione 'current' */
int	is_printed(char c, char *str, int current)
{
	int i = 0;
	while (i < current)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/* Controlla se 'c' è presente in tutta la stringa 'str' */
int	is_in_str(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0); 
}

/* Stampa i caratteri unici della prima stringa */
void	print_first(char *first)
{
	int i = 0;
	while (first[i])
	{
		if (!is_printed(first[i], first, i))
			write(1, &first[i], 1);
		i++;
	}
}

/* Stampa i caratteri unici della seconda stringa che non sono nella prima */
void	print_second(char *second, char *first)
{
	int i = 0;
	while (second[i])
	{
		if (!is_in_str(second[i], first) && !is_printed(second[i], second, i))
			write(1, &second[i], 1);
		i++;
	}
}

/* Main principale */
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		print_first(av[1]);
		print_second(av[2], av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
