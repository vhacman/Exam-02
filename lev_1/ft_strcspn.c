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

 #include <unistd.h>

 size_t  ft_strcspn(const char *s, const char *reject)
 {
     size_t  i = 0;
     size_t  k;
 
     while(s[i])
     {
         k = 0;
         while(reject[k])
         {
             if(reject[k] == s[i])
                 return(i);
             k++;
         }
         i++;
     }
     return(i);
 }
 
 // #include <stdio.h>
 // #include <string.h>
 
 // int main(int argc, char **argv)
 // {
 //     if (argc == 3)
 //     {
 //         printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], ft_strcspn(argv[1], argv[2]));
 //         printf("strcspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], strcspn(argv[1], argv[2]));
 //     }
 //     return(0);
 // }