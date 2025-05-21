/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgdc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:20:21 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:20:21 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
** Calcola il Massimo Comun Divisore (MCD) tra due numeri `a` e `b`
** usando l'algoritmo di Euclide iterativo.
**
** L'algoritmo si basa sulla seguente proprietà:
**   MCD(a, b) = MCD(b, a % b)
**
** Intuizione:
** - Se `a` è multiplo di `b`, allora `b` è il MCD.
** - Altrimenti, il MCD tra `a` e `b` è lo stesso tra `b` e il resto di `a / b`.
**
** Procedura:
** 1. Inizialmente, `a` e `b` sono i due numeri da confrontare.
** 2. Finché `b` è diverso da zero:
**    - Si salva `b` in `temp`.
**    - Si aggiorna `b` con `a % b` (il resto).
**    - Si aggiorna `a` con il vecchio `b` (cioè `temp`).
** 3. Quando `b` diventa zero, `a` contiene il MCD.
**
** Esempio:
** pgdc(48, 18):
**   Iterazione 1: a = 48, b = 18 → a % b = 12
**   Iterazione 2: a = 18, b = 12 → a % b = 6
**   Iterazione 3: a = 12, b = 6  → a % b = 0
**   Fine → MCD = 6
*/
unsigned int pgdc(unsigned int a, unsigned int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return (a);
}

/*
** Main:
** - Accetta due argomenti da linea di comando.
** - Li converte in interi.
** - Se entrambi sono positivi, calcola e stampa il MCD.
** - In ogni caso stampa newline alla fine.
**
** Esempio:
** ./a.out 48 18 → stampa "6"
*/
int main(int ac, char **av)
{
    if(ac == 3)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[2]);
        if( n1 > 0 && n2 > 0)
            printf("%d", pgdc(n1, n2));
    }
    printf("\n");
    return(0);
}
