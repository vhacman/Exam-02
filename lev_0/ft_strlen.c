/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:51:16 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:51:16 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
 * La funzione ft_strlen calcola la lunghezza di una stringa.
 * Riceve come parametro un puntatore a char (una stringa).
 * Scorre la stringa carattere per carattere finché non trova il terminatore '\0'.
 * Ritorna il numero di caratteri trovati, cioè la lunghezza della stringa.
 */
int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/*
 * La funzione main serve per testare la funzione ft_strlen.
 * Se non viene passato nessun argomento da linea di comando, stampa la lunghezza di una stringa vuota.
 * Altrimenti, calcola e stampa la lunghezza del primo argomento passato.
 */
/*
int main(int argc, char **argv)
{
    if (argc == 1)
    {
        printf("ft_strlen(\"\") = %d\n", ft_strlen(""));
        return (0);
    }
    printf("ft_strlen(\"%s\") = %d\n", argv[1], ft_strlen(argv[1]));
    return (0);
}
*/
