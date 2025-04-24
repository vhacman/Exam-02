/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:52:20 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:52:20 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * La funzione ft_putstr stampa su standard output una stringa passata come argomento.
 * Scorre la stringa carattere per carattere finché non incontra il terminatore '\0'.
 * Per ogni carattere, utilizza la funzione write per stamparlo.
 */
void    ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
 * La funzione main controlla che venga passato esattamente un argomento da linea di comando.
 * Se sì, lo passa alla funzione ft_putstr per stamparlo.
 * Alla fine, stampa un carattere di newline per andare a capo.
 */
int main(int ac, char **av)
{
	char *str = av[1];

	if (ac == 2)
	{
		ft_putstr(str);
		write(1, "\n", 1);
	}
	return (0);
}
