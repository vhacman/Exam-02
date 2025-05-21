/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:09:50 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:09:50 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Implementazione della funzione standard `strspn`.
**
** Calcola la lunghezza del segmento iniziale della stringa `s`
** costituito **solo** da caratteri presenti nella stringa `accept`.
**
** Per ogni carattere `s[i]`:
** - Scorre `accept` e verifica se `s[i]` è contenuto.
** - Se sì, continua.
** - Se no (nessuna corrispondenza), termina il ciclo e ritorna `i`.
**
** Ritorna il numero di caratteri iniziali di `s` che appartengono ad `accept`.
**
** Esempi:
** ft_strspn("abcde123", "abcde")       → 5
** ft_strspn("123abc", "0123456789")    → 3
** ft_strspn("hello", "he")            → 2
** ft_strspn("hello", "xyz")           → 0
** ft_strspn("", "abc")                → 0
** ft_strspn("abcdef", "")             → 0
*/
size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j;

	while(s[i])
	{
		j = 0;
		while(accept[j] && s[i] != accept[j])
			j++;
		if(!accept[j])
			break;
		i++;
	}
	return i;
}

/*
** // Variante equivalente, più esplicita:
**
** size_t ft_strspn(const char *s, const char *accept)
** {
**     int i = 0;
**     int j;
**     int found;
**     while (s[i])
**     {
**         j = 0;
**         found = 0;
**         while (accept[j])
**         {
**             if (s[i] == accept[j])
**                 found = 1;
**             j++;
**         }
**         if (!found)
**             break;
**         i++;
**     }
**     return i;
** }
*/

#include <string.h>
#include <stdio.h>

/*
** Test della funzione `ft_strspn` con output di confronto.
*/
// int main(void)
// {
// 	printf("%zu\n", ft_strspn("abcde123", "abcde"));      // 5
// 	printf("%zu\n", ft_strspn("123abc", "0123456789"));   // 3
// 	printf("%zu\n", ft_strspn("hello", "he"));            // 2
// 	printf("%zu\n", ft_strspn("hello", "xyz"));           // 0
// 	printf("%zu\n", ft_strspn("", "abc"));                // 0
// 	printf("%zu\n", ft_strspn("abcdef", ""));             // 0
// 	return 0;
// }
