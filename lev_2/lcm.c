/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:40:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 22:40:59 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    //se uno dei due numeri è 0 il minimo comune multiplo, per definizione è 0
    if(a == 0 || b == 0)
        return (0);
    //iniziamo a cercare dal piu grande dei due numeri, perché il minimo comune multiplo
    // non può essere più piccolo del numero più grande
    if (a > b)
        n = a;
    else
        n = b;
    //entriamo in un ciclo infinito, ovvero prova finché non trova il numero giusto 
    while (1)
    {
        //se possiamo dividere il n per a e per b senza resto
        if(n % a == 0 && n % b == 0)
            return (n); //abbiamo trovato n
        n++;
    }
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%u\n", n(5, 5));
// }