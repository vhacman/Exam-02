/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:06:57 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:06:57 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converte una stringa `str` in un intero (comportamento simile a atoi).
**
** 1. Salta tutti i caratteri di spaziatura iniziali:
**    - Spazio ' ' (ASCII 32)
**    - Tab, newline, carriage return, vertical tab, form feed (ASCII 9–13)
**
** 2. Gestisce un eventuale segno '+' o '-':
**    - Se è '-', il risultato sarà negativo (sign = -1)
**    - Se è '+', il risultato resta positivo (sign = 1)
**
** 3. Converte i caratteri numerici ('0'–'9') uno a uno:
**    - Ogni cifra viene aggiunta al risultato `res`,
**      moltiplicando per 10 ad ogni passaggio per aggiornare la posizione.
**
** 4. Ritorna il risultato moltiplicato per il segno.
**
** Esempio:
** Input:  "  \t\n -123abc" → Output: -123
*/
int ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res * sign);
}
