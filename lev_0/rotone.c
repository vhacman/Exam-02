/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:03:32 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 15:03:32 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * La funzione rotone scorre ogni carattere della stringa.
 * Se il carattere è una lettera (maiuscola o minuscola), lo sostituisce con la lettera successiva.
 * Se il carattere è 'z' o 'Z', ritorna rispettivamente a 'a' o 'A'.
 * I caratteri non alfabetici non vengono modificati.
 * Ogni carattere trasformato viene stampato immediatamente con write.
 */
void    rotone(char *str)
{
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
			c += 1;
		else if (c == 'z')
			c = 'a';
		else if (c == 'Z')
			c = 'A';
		write(1, &c, 1);
		i++;
	}
}

/*
 * La funzione main controlla che venga passato esattamente un argomento.
 * Se sì, chiama la funzione rotone per trasformare e stampare la stringa.
 * In ogni caso, stampa un carattere di newline alla fine.
 */
int main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
