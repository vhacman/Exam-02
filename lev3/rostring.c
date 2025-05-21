/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:27:32 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:27:32 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Ritorna 1 se il carattere è uno spazio, tabulazione o newline.
*/
int is_delimiter(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

/*
** Salta tutti i caratteri di spaziatura a partire da `i`
** e ritorna l'indice del primo carattere non delimitatore.
*/
int skip_space(char *str, int i)
{
    while (str[i] && is_delimiter(str[i]))
        i++;
    return i;
}

/*
** rostring:
** Sposta la prima parola della stringa alla fine e stampa il risultato.
**
** Esempio:
** Input:  "   abc   def   ghi"
** Output: "def ghi abc"
**
** Procedura:
** 1. Salta gli spazi iniziali.
** 2. Salva gli indici di inizio e fine della prima parola (start → end).
** 3. Continua a scorrere la stringa:
**    - Per ogni parola trovata, la stampa preceduta da spazio (se necessario).
** 4. Alla fine, stampa la prima parola salvata.
*/
void rostring(char *str)
{
    int i = 0;
    int start;
    int end;
    int first = 0;

    // Isola la prima parola
    i = skip_space(str, i);
    start = i;
    while (str[i] && !is_delimiter(str[i]))
        i++;
    end = i;

    // Scorre il resto della stringa e stampa le altre parole
    i = skip_space(str, i);
    while (str[i])
    {
        if (!is_delimiter(str[i]))
        {
            if (first)
                write(1, " ", 1);
            while (str[i] && !is_delimiter(str[i]))
                write(1, &str[i++], 1);
            first = 1;
        }
        else
            i++;
    }

    // Stampa la prima parola alla fine
    if (first)
        write(1, " ", 1);
    write(1, str + start, end - start);
}

/*
** Main:
** Se è presente almeno un argomento, applica rostring su av[1].
** In ogni caso termina con newline.
*/
int main(int ac, char **av)
{
    if (ac > 1)
        rostring(av[1]);
    write(1, "\n", 1);
    return 0;
}
