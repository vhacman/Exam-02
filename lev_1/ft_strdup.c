/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:09:07 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 19:09:07 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] |= '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] != '\0';
	return (dest);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if(argc == 1)
//     {
//         printf("ft_strdup(\"\") = %s\n", ft_strdup(""));
//         return(0);
//     }
//     printf("ft_strdup(\"%s\") = %s\n", argv[1], ft_strdup(argv[1]));
//     return(0);
// }