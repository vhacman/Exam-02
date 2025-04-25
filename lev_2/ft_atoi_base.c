/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:03:01 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 21:03:01 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Converte un carattere alfanumerico ('0'-'9', 'a'-'f', 'A'-'F')
** nel corrispondente valore numerico.
** Se il carattere non è valido, ritorna -1.
*/
int char_to_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

/*
** Converte una stringa str rappresentante un numero in base str_base
** in un intero in base 10.
** Gestisce anche il segno negativo se il primo carattere è '-'.
*/
int ft_atoi_base(char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int value;

	while(str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((value = char_to_value(str[i])) != -1 && value < str_base)
	{
		result = result * str_base + value;
		i++;
	}
	return(result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
// 	}
// 	return (0);
// }