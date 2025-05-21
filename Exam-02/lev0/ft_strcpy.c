/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:01:58 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:01:58 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copia la stringa puntata da s2 nella stringa s1.
** La copia avviene carattere per carattere fino al terminatore nullo '\0'.
** Alla fine, viene aggiunto manualmente il terminatore in s1.
** Ritorna il puntatore s1.
**
** N.B.: il ciclo controlla *s2 invece di s2[i],
**       ma accede comunque tramite indice s2[i].
**       Il controllo corretto dovrebbe essere s2[i].
*/
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while(*s2)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}
