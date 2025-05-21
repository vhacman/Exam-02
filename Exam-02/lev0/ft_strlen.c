/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:02:09 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:02:09 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calcola la lunghezza della stringa passata come argomento.
** Scorre la stringa fino al carattere nullo '\0' e conta i caratteri.
** Ritorna il numero totale di caratteri (escluso il terminatore).
*/
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}
