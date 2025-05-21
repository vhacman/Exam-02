/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:07:24 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:07:24 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Confronta due stringhe `s1` e `s2` carattere per carattere.
**
** Il ciclo continua finché:
** - entrambi i caratteri correnti non sono '\0'
** - i caratteri sono uguali tra loro
**
** Quando viene trovato un carattere diverso, oppure uno dei due termina,
** la funzione ritorna la differenza tra i caratteri correnti:
** `s1[i] - s2[i]`, interpretati come unsigned char in C standard.
**
** - Ritorno 0: le stringhe sono identiche
** - Ritorno > 0: s1 > s2
** - Ritorno < 0: s1 < s2
**
** Variante commentata: versione pointer-based, stesso comportamento.
*/
int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);
}

/*
int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
*/
