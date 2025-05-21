/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:14:18 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:14:18 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Scrive un singolo carattere su stdout.
*/
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
** Converte una stringa da snake_case a camelCase.
**
** 1. Scorre ogni carattere della stringa `str`.
** 2. Quando trova un underscore '_':
**    - Salta il carattere '_'
**    - Converte il carattere successivo in maiuscolo sottraendo 32
**      (valido solo se il carattere è una lettera minuscola).
** 3. Ogni altro carattere viene stampato così com'è.
**
** La conversione avviene durante la stampa: la stringa originale non viene modificata.
**
** Esempio:
** Input:  "this_is_snake"
** Output: "thisIsSnake"
**
** N.B.: Non gestisce underscore multipli consecutivi né input errati (es. underscore finale).
*/
void    snake_to_camel(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] == '_')
        {
            i++;
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}

/*
** Se viene fornito un solo argomento da linea di comando,
** lo converte da snake_case a camelCase e lo stampa.
** In ogni caso, stampa un newline alla fine.
*/
int main(int ac, char **av)
{
    if(ac == 2)
        snake_to_camel(av[1]);
    ft_putchar('\n');
    return 0;
}
