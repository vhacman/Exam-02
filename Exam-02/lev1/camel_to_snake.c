/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:06:16 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:06:16 by vhacman          ###   ########.fr       */
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
** Converte una stringa da camelCase a snake_case.
**
** - Scorre ogni carattere della stringa:
**   - Se è una lettera maiuscola ('A'–'Z'):
**     - Scrive prima un underscore '_'
**     - Poi converte la lettera in minuscolo (aggiungendo 32 in ASCII)
**   - Se non è maiuscola, lo stampa così com'è
**
** Non modifica o rimuove altri caratteri. Non esegue validazioni.
**
** Esempio:
** Input:  thisIsCamelCase
** Output: this_is_camel_case
*/
void    camel_to_snake(char *str)
{
	int i = 0;
	while(str[i])
	{
		char c = str[i];
		if(c >= 'A' && c <= 'Z')
		{
			ft_putchar('_');
			ft_putchar(c + 32);
		}
		else
			ft_putchar(c);
		i++;
	}
}

/*
** Se viene fornito un solo argomento, lo converte da camelCase a snake_case
** e lo stampa su stdout. In ogni caso, stampa un newline finale.
*/
int main(int ac, char **av)
{
	if(ac == 2)
		camel_to_snake(av[1]);
	ft_putchar('\n');
	return(0);
}
