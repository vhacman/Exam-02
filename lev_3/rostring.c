/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:59:08 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 19:59:08 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str, int len)
{
	write(1, str, len);
}

int skip_space(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int word_len(char *str)
{
	int i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}

/* Stampa tutte le parole tranne la prima */
void    print_rest_words(char *str, int start)
{
	int i = start;
	int first = 1;

	i = skip_space(str, i);

	while (str[i])
	{
		int len = word_len(str + i);
		if (len > 0)
		{
			if (first == 0)
				ft_putchar(' ');
			ft_putstr(str + i, len);
			first = 0;
			i += len;
		}
		i = skip_space(str, i);
	}
	if (first == 0)
		ft_putchar(' ');
}

/* Stampa la prima parola salvata */
void    print_first_word(char *str, int start, int len)
{
	ft_putstr(str + start, len);
}

/* Funzione principale */
void    rostring(char *str)
{
	int i = 0;
	int first_word_start;
	int first_word_len;

	i = skip_space(str, i);
	first_word_start = i;
	first_word_len = word_len(str + i);
	i = i + first_word_len;

	print_rest_words(str, i);
	print_first_word(str, first_word_start, first_word_len);
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
