/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:52:00 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 14:52:00 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * La funzione ft_strcpy copia il contenuto della stringa s2 nella stringa s1.
 * Copia ogni carattere da s2 a s1 fino a incontrare il terminatore null '\0'.
 * Alla fine aggiunge il terminatore anche alla stringa di destinazione s1.
 * Ritorna il puntatore s1.
 * Nota: s1 deve avere spazio sufficiente per contenere la copia di s2.
 */
char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
 * La funzione main serve per testare ft_strcpy.
 * Alloca dinamicamente una stringa abbastanza grande (100 caratteri).
 * Copia il contenuto dell'argomento passato (argv[1]) in essa.
 * Stampa il risultato della copia.
 * Libera la memoria allocata prima di terminare il programma.
 */
/*
int main(int argc, char **argv)
{
    char *str = malloc(sizeof(char) * 100);
    printf("ft_strcpy(\"%s\", str) = %s\n", argv[1], ft_strcpy(str, argv[1]));
    free(str);
    return(0);
}
*/
