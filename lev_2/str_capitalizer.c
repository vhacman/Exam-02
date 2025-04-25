/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:25:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 00:25:59 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:10:09 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 00:30:00 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Scrive un carattere sullo standard output.
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * Restituisce 1 se il carattere è una lettera (maiuscola o minuscola), altrimenti 0.
*/
int	is_letter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
 * Restituisce 1 se il carattere è uno spazio o un tabulatore, altrimenti 0.
 * Serve per individuare i separatori tra parole.
 */
int	is_separator(char c)
{
	return (c == ' ' || c == '\t');
}

/*
 * Converte una lettera maiuscola in minuscola.
 * Se il carattere non è maiuscolo, lo restituisce invariato.
*/
char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
 * Converte una lettera minuscola in maiuscola.
 * Se il carattere non è minuscolo, lo restituisce invariato.
 */
char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
 * Riceve una stringa e la stampa trasformando ogni parola:
 * - la prima lettera diventa maiuscola
 * - le altre lettere della parola diventano minuscole
 * Le parole sono separate da spazi o tabulatori.
 */
void	str_capitalizer(char *str)
{
	int		i;
	char	current;

	i = 0;
	while (str[i])
	{
		current = str[i];
		if (i == 0 || is_separator(str[i - 1]))
		{
			if (current >= 'a' && current <= 'z')
				current = to_upper(current);
		}
		else
		{
			if (current >= 'A' && current <= 'Z')
				current = to_lower(current);
		}
		ft_putchar(current);
		i++;
	}
}

/*
 * Funzione principale:
 * - Se non ci sono argomenti, stampa solo una nuova riga.
 * - Altrimenti, per ogni argomento passato, stampa la stringa 
 * trasformata con str_capitalizer, seguita da una nuova riga.
 */
int	main(int ac, char **av)
{
	int	i = 1;

	if (ac > 1)
	{
		while (i < ac)
		{
			str_capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
