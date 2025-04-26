/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:08:37 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 12:08:37 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\t');
}

void	rev_wstr(char *str)
{
	int i;
	int start;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		while (i >= 0 && !is_delimiter(str[i]))
			i--;
		start = i + 1;
		while(str[start] && !is_delimiter(str[start]))
		{
			ft_putchar(str[start]);
			start++;
		}
		if (i > 0)
			ft_putchar(' ');
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	ft_putchar('\n');
	return (0);
}

