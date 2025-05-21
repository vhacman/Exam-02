/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:13:33 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:13:33 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Stampa la rappresentazione binaria (8 bit) del valore `octet`.
**
** Per ogni posizione da 7 a 0 (bit più significativo a meno significativo):
** - Esegue uno shift a destra di `i` posizioni.
** - Isola il bit meno significativo con AND 1.
** - Se il risultato è 1, scrive '1'; altrimenti scrive '0'.
**
** Esempio:
** Input:  octet = 5 → binario: 00000101
** Output: "00000101"
*/
void	print_bits(unsigned char octet)
{
	for (int i = 7; i >= 0; i--)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

/*
** // Variante equivalente, con variabile intermedia `bit`:
**
** void print_bits(unsigned char octet)
** {
**     int i = 7;
**     unsigned char bit;
**
**     while(i >= 0)
**     {
**         bit = ((octet >> i) & 1) + '0';
**         write(1, &bit, 1);
**         i--;
**     }
** }
*/
