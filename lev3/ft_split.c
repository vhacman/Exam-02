/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:26:18 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:26:18 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** Ritorna 1 se il carattere è uno spazio, tabulazione o newline.
** Serve per individuare i separatori tra le parole.
*/
int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/*
** Salta i caratteri delimitatori (spazi, tab, newline) e
** ritorna l'indice del primo carattere utile.
*/
int skip_space(char *str, int i)
{
	while (str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

/*
** Salta una parola, ovvero una sequenza di caratteri NON delimitatori,
** e ritorna l'indice subito dopo la fine della parola.
*/
int skip_word(char *str, int i)
{
	while (str[i] && !is_delimiter(str[i]))
		i++;
	return i;
}

/*
** Calcola la lunghezza di una parola a partire da `str`,
** ovvero il numero di caratteri consecutivi non delimitatori.
*/
int ft_wordlen(char *str)
{
	int i = 0;
	while (str[i] && !is_delimiter(str[i]))
		i++;
	return i;
}

/*
** Conta quante parole ci sono in `str`.
** Una parola è una sequenza continua di caratteri non delimitatori.
*/
int word_count(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		i = skip_space(str, i);
		if (str[i] && !is_delimiter(str[i]))
		{
			count++;
			i = skip_word(str, i);
		}
	}
	return count;
}

/*
** Copia una parola da `str` e la restituisce in una nuova stringa
** allocata dinamicamente. La parola termina dove iniziano i delimitatori.
*/
char *word_dup(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *new = malloc(sizeof(char) * (len + 1));

	if (!new)
		return NULL;
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return new;
}

/*
** Divide una stringa `str` in parole separate da spazi, tab o newline.
**
** - Conta quante parole ci sono.
** - Alloca un array di stringhe (char **) con spazio sufficiente.
** - Per ogni parola trovata:
**     - la copia con `word_dup()`
**     - la inserisce nell'array
** - Alla fine aggiunge un puntatore NULL per marcare la fine dell'array.
**
** Esempio input:  "  hello\tworld\nfoo "
** Output array:   ["hello", "world", "foo", NULL]
*/
char **ft_split(char *str)
{
	int i = 0;
	int total = word_count(str);
	int j = 0;
	char **array = malloc(sizeof(char *) * (total + 1));

	if (!array)
		return NULL;

	while (str[i])
	{
		i = skip_space(str, i);
		if (str[i] && !is_delimiter(str[i]))
		{
			array[j++] = word_dup(&str[i]);
			i = skip_word(str, i);
		}
	}
	array[j] = NULL;
	return array;
}
