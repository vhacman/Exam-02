/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:07:57 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:07:57 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Calcola la lunghezza della stringa `str` (escluso il terminatore '\0').
** Ritorna il numero di caratteri presenti.
*/
int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

/*
** Alloca dinamicamente una nuova stringa identica a `src`.
**
** 1. Calcola la lunghezza di `src` con ft_strlen.
** 2. Alloca memoria per una nuova stringa `dest` (lunghezza + 1 per '\0').
** 3. Copia ogni carattere da `src` a `dest`.
** 4. Termina `dest` con '\0'.
**
** Ritorna il puntatore alla nuova stringa duplicata.
** In caso di fallimento nell'allocazione, ritorna NULL.
*/
char	*ft_strdup(char *src)
{
	int i = 0;
	char *dest;
	int len = ft_strlen(src);

	dest = malloc(sizeof(char) * (len + 1));
	if(!dest)
		return(NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
