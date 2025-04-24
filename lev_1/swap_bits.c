/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:46:20 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 22:46:20 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* Write a function that takes a byte, swaps its halves (like the example) and
 * returns the result.
 * Your function must be declared as follows:
 * unsigned char	swap_bits(unsigned char octet);
 */

/* octet >> 4 → sposta i 4 bit alti verso destra (diventano i 4 bit bassi)
 *
 * octet << 4 → sposta i 4 bit bassi verso sinistra (diventano i 4 bit alti)
 * | → unisce i due risultati in un unico byte
 */
unsigned char   swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

// int	main(void)
// {
// 	unsigned char val = 65; // 0100 0001
// 	unsigned char res = swap_bits(val);
// 	printf("Original: %u, Swapped: %u\n", val, res); // Output: 65, 20
// 	return (0);
// }