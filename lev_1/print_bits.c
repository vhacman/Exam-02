/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:30:19 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 22:30:19 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.
Your function must be declared as follows:
void	print_bits(unsigned char octet);
*/

void    print_bits(unsigned char octet)
{
    int i;
    char bit;

    i = 7;
    while (i >= 0)
    {
        bit = (octet >> i) & 1; // prendi l'i-esimo bit da sinistra
        bit = bit + '0';  // converti 0 o 1 in carattere ASCII '0' o '1'
        write (1, &bit, 1);
        i--;
    }
}

// #include <stdlib.h>
// #include <stdio.h>

// int main (int argc, char **argv)
// {
//     unsigned char octet;

//     if (argc == 2) 

//     octet = atoi(argv[1]);
//     print_bits(octet);
//     printf("\n");

//     return 0;

// }