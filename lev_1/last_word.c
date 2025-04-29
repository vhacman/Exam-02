/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:05:44 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 20:05:44 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i = 0;
	while(str[i])
		i++;
	return(i);
}

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}
void	last_word(char *str)
{
	int	i = ft_strlen(str) - 1;
	int start;

	while(i >= 0 && is_delimiter(str[i]))
			i--;
	if(i >= 0)
	{
		while(str[i] && !is_delimiter(str[i]))
			i--;
		start = i + 1;
		while(str[start])
		{
			if(str[start] && !is_delimiter(str[start]))
				ft_putchar(str[start]);
			start++;
		}
		i--;
	}
}

int	main(int ac, char **av)
{
	if(ac == 2)
		last_word(av[1]);
	ft_putchar('\n');
	return(0);
}