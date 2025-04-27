/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:52:35 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 11:52:35 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	ft_wordlen(char *str)
{
	int	i = 0;

	while(str[i] && !is_delimiter(str[i]))
		i++;
	return(i);
}

char	*word_dup(char *str)
{
	int		i = 0;
	int		len = ft_wordlen(str);
	char	*word = malloc(len + 1);

	if (!word)
		return(NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		while(is_delimiter(*str))
			str++;
		if (*str)
		{
			count++;
			while(*str && !is_delimiter(*str))
				str++;	
		}
	}
	return (count);
}

char	**ft_split(char *str)
{
	int		i = 0;
	int		words = count_words(str);
	char	**array = malloc(sizeof(char *) * (words + 1));

	if (!array)
		return (NULL);
	while (*str)
	{
		while (is_delimiter(*str))
			str++;
		if (*str)
		{
			array[i++] = word_dup(str);
			while (*str && !is_delimiter(*str))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}
