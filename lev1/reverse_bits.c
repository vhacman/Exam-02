/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:13:55 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:13:55 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Inverte i bit di un `unsigned char` (8 bit).
**
** Per ogni bit da destra verso sinistra in `octet`:
** - Sposta `reversed` di un bit a sinistra.
** - Copia il bit meno significativo di `octet` in `reversed` con OR.
** - Sposta `octet` di un bit a destra per analizzare il successivo.
**
** Al termine, `reversed` contiene i bit di `octet` in ordine inverso.
**
** Esempio:
** Input:  64  → 01000000
** Output: 2   → 00000010
*/
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reversed = 0;

	for (int i = 8; i > 0; i--)
		reversed = (reversed << 1) | (octet & 1), octet >>= 1;

	return reversed;
}

#include <stdio.h>

/*
** Test: stampa il valore decimale risultante dall'inversione dei bit.
*/
// int	main()
// {
// 	unsigned char octet = 64;
// 	unsigned char reversed = reverse_bits(octet);
// 	printf("%d\n", reversed);  // Output: 2
// 	return 0;
// }
