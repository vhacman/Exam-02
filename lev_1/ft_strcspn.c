/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:42:26 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 18:42:26 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
 * This function returns the number of characters in the string `s` that 
 * precede the first occurrence of any character from the string `reject`.
 * If no character from `reject` is found in `s`, the return value is the 
 * length of `s`.
 */

size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t  i = 0;
    size_t  j;

    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

