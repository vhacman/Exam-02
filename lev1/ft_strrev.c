/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:09:26 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:09:26 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calcola la lunghezza della stringa `str` (escluso il carattere '\0').
** Ritorna il numero di caratteri presenti nella stringa.
*/
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

/*
** Inverte in-place la stringa `str`.
**
** 1. Calcola gli indici di inizio (`i = 0`) e fine (`j = strlen - 1`).
** 2. Scambia i caratteri in posizione `i` e `j` finché `i < j`.
** 3. Usa una variabile temporanea `temp` per effettuare ogni scambio.
**
** Al termine, la stringa è modificata direttamente in memoria.
** Ritorna un puntatore alla stringa invertita.
**
** Esempio:
** Input:  "abcdef"
** Output: "fedcba"
*/
char    *ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
	char temp;

	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return(str);
}

/*
** // Test della funzione:
** #include <stdio.h>
** int main(void)
** {
**     char str[] = "abcdef";
**     printf("Originale: %s\n", str);
**     ft_strrev(str);
**     printf("Invertita: %s\n", str);
**     return 0;
** }
*/
