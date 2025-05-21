/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:14:35 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:14:35 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Scambia i 4 bit più alti con i 4 bit più bassi in un `unsigned char`.
**
** - `octet >> 4` sposta i 4 bit alti verso destra (diventano i 4 bit bassi).
** - `octet << 4` sposta i 4 bit bassi verso sinistra (diventano i 4 bit alti).
** - L'OR bit a bit combina i due risultati, effettuando lo scambio.
**
** Esempio:
** Input:  0b10110001 → Output: 0b00011011
**         (0xB1)                  (0x1B)
*/
unsigned char swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}
