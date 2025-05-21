/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:27:59 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:27:59 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ordina un array di interi `tab` di lunghezza `size` in ordine crescente.
**
** Algoritmo: Bubble Sort (ottimizzato con reset indice)
**
** - Scorre l’array confrontando ogni coppia adiacente.
** - Se due elementi sono fuori ordine, li scambia.
** - Dopo ogni scambio, riparte da inizio (i = 0) per garantire ordinamento completo.
**
** Complessità: O(n^2) nel caso peggiore.
** Funziona correttamente anche in presenza di duplicati.
*/
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp;

    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;  // restart dopo uno scambio
        }
        else
            i++;
    }
}

/*
** // Esempio di test:
**
** #include <stdio.h>
**
** int main()
** {
**     int tab[] = {3, 2, 5, 5, 8, 1};
**     int size = 6;
**     sort_int_tab(tab, size);
**
**     printf("Array dopo l'ordinamento:\n");
**     for (unsigned int i = 0; i < size; i++)
**         printf("%d ", tab[i]);
**     printf("\n");
**     return 0;
** }
*/
