/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 22:59:24 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 22:59:24 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*
** Scrive un singolo carattere sullo standard output.
** Utilizza la syscall write con file descriptor 1 (stdout).
*/
void    ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Ritorna 1 se il carattere passato è uno spazio, tabulazione
** o newline (delimitatori di parole). Altrimenti ritorna 0.
*/
int is_delimiter(char c)
{
	return(c == '\n' || c == '\t' || c == ' ');
}

/*
** Stampa il primo "word token" della stringa passata, ovvero
** la prima sequenza di caratteri non delimitati da spazio,
** tabulazione o newline. Ignora tutti i caratteri iniziali
** finché non trova il primo carattere valido, poi stampa
** carattere per carattere fino al prossimo delimitatore.
*/
void	first_word(char *str)
{
	int i = 0; 

	while(is_delimiter(str[i]))
		i++;
	while(str[i] && !is_delimiter(str[i]))
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
** Punto di ingresso del programma. Se viene passato un solo
** argomento da linea di comando (oltre al nome del programma),
** stampa la prima parola di tale argomento. In ogni caso,
** stampa un newline alla fine.
*/
int	main(int ac, char **av)
{
	if(ac == 2)
		first_word(av[1]);
	ft_putchar('\n');
	return(0);
}
