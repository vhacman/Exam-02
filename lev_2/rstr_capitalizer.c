/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:49:02 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 23:49:02 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un singolo carattere sulla standard output.
*/
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Controlla se il carattere passato è una lettera alfabetica (maiuscola o minuscola).
** Ritorna 1 se è una lettera, 0 altrimenti.
*/
int is_letter(char c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
** Converte una lettera maiuscola in minuscola.
** Se il carattere non è una lettera maiuscola, lo restituisce invariato.
*/
char    to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
** Converte una lettera minuscola in maiuscola.
** Se il carattere non è una lettera minuscola, lo restituisce invariato.
*/
char    to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;    
	return (c);
}

/*
** Riceve una stringa e stampa ogni parola con solo l'ultima lettera maiuscola
** e le altre minuscole. Tutti gli altri caratteri vengono stampati come sono.
*/
void    rstr_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (is_letter(str[i]))
		{
			if(!is_letter(str[i + 1]))
				ft_putchar(to_upper(str[i]));
			else
				ft_putchar(to_lower(str[i]));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
** Funzione principale: gestisce gli argomenti da linea di comando.
** Se ci sono più di due argomenti (programma + 1 parola), stampa solo un newline.
** Altrimenti, applica la trasformazione rstr_capitalizer all'argomento dato.
*/
int main(int ac, char **av)
{
	int i = 1;

	if (ac > 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i < ac)
	{
		rstr_capitalizer(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
