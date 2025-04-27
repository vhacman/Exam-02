/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:07:40 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 11:07:40 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int get_len(int n)
{
	int len = 0;

	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char    *ft_itoa(int n)
{
	char *result;
	int  len;

	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != '0')
	{
		len--;
		result[len] = absolute(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
