/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:29:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 18:29:59 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

/* This function compares two strings character by character. It returns:  
 *   - A negative number if s1 < s2 
 *   - 0 if s1 == s2
 *   - A positive number if s1 > s2                                     
 * The comparison is based on ASCII values.
 * */

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	printf("Original vs Clone: <%d> <%d>", strcmp("hello World", "hello world") , ft_strcmp("hello World", "hello world"));
// 	printf("\nOriginal vs Clone: <%d> <%d>", strcmp("hello World", "") , ft_strcmp("hello World", ""));

// }