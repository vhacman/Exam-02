/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:49:40 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:49:40 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
 *La funzione rot_13 applica la cifratura ROT13 a una stringa.
 * ROT13 è un semplice algoritmo di cifratura che sostituisce ogni lettera 
 * con quella che si trova 13 posizioni dopo nell’alfabeto. 
 * Ad esempio: 'A' diventa 'N', 'B' diventa 'O', ..., 'N' diventa 'A', ecc.
 * Lo stesso vale per le lettere minuscole.
 * I caratteri non alfabetici non vengono modificati. 
 */
void    rot_13(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		if ((c >= 'A' && c <= 'M') || (c >= 'a' && c<= 'm'))
			c = c + 13;
		else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
			c = c - 13;
		write (1, &c, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write( 1, "\n", 1);
	return (0);
}
