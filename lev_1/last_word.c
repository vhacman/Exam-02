/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:05:44 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 20:05:44 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.*/

#include <unistd.h>

void	print_last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--; // ora 'i' punta all’ultimo carattere valido
    
    //Serve per evitare che spazi o tab alla fine vengano considerati come parte della "parola".
	while ((str[i] == ' ' || str[i] == '\t') && i != 0)
		i--;

    //Qui vai all'indietro finché trovi caratteri validi di parola.
	while (str[i] != ' ' && str[i] != '\t' && i != 0)
		i--;
    
    //4. Se ti sei fermato su uno spazio/tab, vai avanti di uno
	if (str[i] == ' ' || str[i] == '\t')
		i++;
    
    //5. Stampa la parola fino al prossimo spazio/tab o fine stringa

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_last_word(av[1]);
    write (1, "\n", 1);
    return (0);
}
