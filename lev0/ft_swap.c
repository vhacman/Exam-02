/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:02:21 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:02:21 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Scambia i valori di due interi puntati da a e b.
** Utilizza una variabile temporanea per conservare il valore originale di *a.
** Dopo lo scambio, *a contiene il valore iniziale di *b e viceversa.
*/
void    ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
