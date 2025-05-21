/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:25:09 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:25:09 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** Calcola la lunghezza necessaria per convertire `n` in stringa.
** - Se `n < 0`, include 1 per il segno '-'.
** - Conta le cifre in base 10.
** - Caso particolare: `n == 0` → lunghezza 1 (gestito in ft_itoa).
*/
int get_len(int n)
{
    int len = 0;

    if (n <= 0)
        len++;  // per '0' o '-'
    while (n != 0)
    {
        len++;
        n = n / 10;
    }
    return len;
}

/*
** Converte un intero `nbr` in una stringa allocata dinamicamente.
**
** - Usa `long` per gestire il caso `-2147483648` senza overflow.
** - Alloca una stringa con dimensione calcolata da `get_len`.
** - Inserisce il terminatore `\0` alla fine.
** - Gestisce zero e numeri negativi.
** - Inserisce le cifre da destra a sinistra.
**
** Ritorna:
** - Puntatore alla stringa allocata
** - NULL in caso di errore malloc
**
** Esempio:
** ft_itoa(-123) → "-123"
** ft_itoa(0)    → "0"
*/
char *ft_itoa(int nbr)
{
    int len = get_len(nbr);
    long n = nbr;
    char *result = malloc(len + 1);
    if (!result)
        return NULL;
    result[len] = '\0';
    if (n == 0)
        result[0] = '0';
    if (n < 0)
    {
        result[0] = '-';
        n = -n;
    }
    while (n != 0)
    {
        result[--len] = n % 10 + '0';
        n = n / 10;
    }
    return result;
}

/*
** // Test:
** #include <stdio.h>
**
** int main()
** {
**     printf("%s\n", ft_itoa(-2147483648));
**     printf("%s\n", ft_itoa(0));
**     printf("%s\n", ft_itoa(12345));
**     return 0;
** }
*/
