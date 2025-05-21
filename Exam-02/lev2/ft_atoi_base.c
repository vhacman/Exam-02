/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:16:58 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:16:58 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converte un carattere `c` in valore numerico, compatibile con basi fino a 16.
**
** - '0'–'9' → 0–9
** - 'a'–'f' → 10–15
** - 'A'–'F' → 10–15
**
** Se il carattere non è valido per alcuna base, ritorna -1.
*/
int char_to_value(char c)
{
	if(c >= '0' && c <= '9')
		return(c - '0');
	if(c >= 'a' && c <= 'f')
		return(c - 'a' + 10);
	if(c >= 'A' && c <= 'F')
		return(c - 'A' + 10);
	return(-1);
}

/*
** Converte una stringa `str` in intero secondo la base specificata (2–16).
**
** 1. Ignora spazi iniziali e caratteri di controllo (tab, newline, ecc.).
** 2. Gestisce opzionalmente un segno '+' o '-'.
** 3. Per ogni carattere, converte in valore numerico con `char_to_value`.
**    - Se il valore è valido e inferiore alla base, lo accumula in `res`.
**    - Altrimenti termina la conversione.
**
** Ritorna l'intero risultante, tenendo conto del segno.
**
** Esempi:
** ft_atoi_base("1010", 2)   → 10
** ft_atoi_base("1A", 16)    → 26
** ft_atoi_base("-7B", 16)   → -123
*/
int ft_atoi_base(const char *str, unsigned int base)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	int value;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}

	while((int)(value = char_to_value(str[i])) != -1 && value < (int)base)
	{
		res = res * base + value;
		i++;
	}
	return(res * sign);
}
