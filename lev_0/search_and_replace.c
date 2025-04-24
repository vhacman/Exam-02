/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:24:45 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 15:24:45 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * La funzione ft_putchar stampa un singolo carattere
 * su standard output utilizzando write.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * La funzione replace_and_print prende in input:
 * - una stringa di partenza
 * - un carattere target da cercare
 * - un carattere sostitutivo
 * Scorre la stringa e stampa ogni carattere, sostituendo
 * il target con il carattere sostitutivo.
 */
void	replace_and_print(char *str, char target, char replacement)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == target)
			ft_putchar(replacement);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
 * La funzione main controlla che siano stati passati esattamente tre argomenti:
 * - av[1]: stringa da elaborare
 * - av[2]: carattere da sostituire (lunghezza 1)
 * - av[3]: carattere sostitutivo (lunghezza 1)
 * Se i controlli sono superati, chiama replace_and_print.
 * In ogni caso, stampa un newline alla fine.
 */
int main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
		replace_and_print(av[1], av[2][0], av[3][0]);
	ft_putchar('\n');
	return (0);
}
