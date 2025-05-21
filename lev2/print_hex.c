/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:20:43 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:20:43 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Converte una stringa numerica in intero (positivo).
**
** - Legge solo cifre decimali ('0'–'9')
** - Termina alla prima non-cifra
** - Non gestisce segni né spazi
**
** Esempio:
** ft_atoi("42") → 42
** ft_atoi("123abc") → 123
*/
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return res;
}

/*
** Stampa il numero intero `n` in formato esadecimale minuscolo.
**
** - Usa ricorsione per stampare le cifre da sinistra a destra.
** - La base è "0123456789abcdef".
**
** Esempio:
** print_hex(255) → stampa "ff"
** print_hex(42)  → stampa "2a"
*/
void print_hex(int n)
{
	char *base = "0123456789abcdef";
	if(n >= 16)
		print_hex(n / 16);
	char c = base[n % 16];
	write(1, &c, 1);
}

/*
** Main:
** - Se viene passato un argomento, lo converte in intero con ft_atoi
**   e lo stampa in esadecimale usando print_hex.
** - In ogni caso stampa un newline alla fine.
**
** Esempio:
** ./a.out 255 → stampa "ff"
*/
int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return 0;
}
