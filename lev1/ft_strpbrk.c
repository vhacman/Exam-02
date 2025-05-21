/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:08:28 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:08:28 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementazione della funzione standard `strpbrk`.
**
** Cerca il primo carattere nella stringa `s1` che compare anche in `s2`.
**
** 1. Scorre `s1` carattere per carattere.
** 2. Per ogni carattere di `s1`, scorre tutta `s2`:
**    - Se trova una corrispondenza tra s1[i] e s2[j], ritorna un puntatore
**      alla posizione corrispondente in `s1`.
** 3. Se nessun carattere di `s1` è presente in `s2`, ritorna NULL.
**
** Esempio:
** s1 = "Ciaone", s2 = "wxyzo" → ritorna puntatore a "one" (perché 'o' è il primo match)
*/
char    *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;

    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                return((char *)(s1 + i));
            j++;
        }
        i++;
    }
    return(0);
}

#include <stdio.h>

/*
** Esegue un test della funzione `ft_strpbrk`.
** Stampa il sottostringa di `test` a partire dal primo carattere
** trovato anche in `test2`.
**
** In questo caso:
** test  = "Ciaone"
** test2 = "wxyzo"
** → 'o' è il primo carattere comune, quindi viene stampato "one"
*/
int main()
{
    char test[] = "Ciaone";
    char test2[] = "wxyzo";
    printf("%s\n", ft_strpbrk(test, test2));
    return 0;
}
