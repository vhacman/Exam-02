/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:27:15 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:27:15 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Ritorna 1 se il carattere è uno spazio, tabulazione o newline.
*/
int is_delimiter(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

/*
** Salta i delimitatori andando all’indietro nella stringa `str`
** partendo dalla posizione `i`, e ritorna l’indice del primo carattere non delimitatore.
*/
int rskip_space(char *str, int i)
{
    while (i >= 0 && is_delimiter(str[i]))
        i--;
    return i;
}

/*
** Calcola la lunghezza della stringa `str`.
*/
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

/*
** Salta una parola andando all’indietro nella stringa `str`
** partendo dalla posizione `i`, e ritorna l’indice del carattere
** immediatamente precedente la parola.
*/
int rskip_word(char *str, int i)
{
    while (i >= 0 && !is_delimiter(str[i]))
        i--;
    return i;
}

/*
** Stampa le parole di `str` in ordine inverso, separate da spazi singoli.
** - Parte dalla fine della stringa.
** - Salta eventuali spazi finali.
** - Identifica e stampa ciascuna parola andando all’indietro.
** - Gestisce la spaziatura corretta (nessuno spazio prima della prima parola).
**
** Esempio:
** Input:  "  hello world  test "
** Output: "test world hello"
*/
void rev_wstr(char *str)
{
    int i = ft_strlen(str) - 1;
    int start;
    int first = 0;

    while (i >= 0)
    {
        i = rskip_space(str, i);
        if (i < 0)
            break;
        if (first)
            write(1, " ", 1);
        start = rskip_word(str, i);
        write(1, &str[start + 1], i - start);
        i = start;
        first = 1;
    }
}

/*
** Main:
** - Se viene passato un solo argomento, stampa le sue parole al contrario.
** - In ogni caso termina con un newline.
*/
int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return (0);
}
