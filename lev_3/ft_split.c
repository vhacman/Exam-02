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
#include <unistd.h>
#include <stdlib.h>

int is_delimiter(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}

int ft_wordlen(char *str)
{
	int i = 0;
	while(str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		i++;
	return(i);
}

int ft_wordcount(char *str)
{
	int count = 0;
	int i = 0;

	while(str[i])
	{
		while(is_delimiter(str[i]))
			i++;
		if(str[i] && !is_delimiter(str[i]))
		{
			count++;
			while(str[i] && !is_delimiter(str[i]))
				i++;
		}
	}
	return(count);
}

char	*word_dup(char *str)
{
	int i = 0;
	int word_len = ft_wordlen(str);
	char *new;

	new = malloc(sizeof(char) * (word_len + 1));
	if(!new)
		return(NULL);
	while(str[i] && i < word_len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return(new);
}

char **ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		counted = ft_wordcount(str);
	char	**array = malloc(sizeof(char *) * (counted + 1));

	if(!array)
		return(NULL);
	while(str[i])
	{
		while(is_delimiter(str[i]))
			i++;
		if(str[i] && !is_delimiter(str[i]))
		{
			int	word_len = ft_wordlen(&str[i]);
			array[j++] = word_dup(&str[i]);
			i = word_len + i;
		}
	}
	array[j] = NULL;
	return(array);
}