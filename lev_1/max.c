/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:21:07 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 22:21:07 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int max(int *tab, unsigned int len)
{
    int             max; //massimo trovato
    unsigned int    i; 

    max = *tab; // max uguale al primo elemento dell’array (tab[0]).
    i = 1;//per non confrontare il primo elemento con se stesso
    if (len == 0) //se array è vuoto
        return (0);
    //scorre tutto l'array da tab[1] a tab[len - 1]
    while (i < len)
    {
        //se un elemento è maggiore del max attuale lo aggiorni.
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max); //ritorna il massimo
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int a[] = {4, 17, -5, 0, 42, 13};
// 	int b[] = {};

// 	printf("Max: %d\n", max(a, 6)); // Output: 42
// 	printf("Empty: %d\n", max(b, 0)); // Output: 0
// }