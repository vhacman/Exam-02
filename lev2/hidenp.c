/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:18:33 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:18:33 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Verifica se la stringa `s1` è una **subsequenza** di `s2`.
**
** Una subsequenza mantiene l'ordine dei caratteri ma non richiede contiguità.
**
** Logica:
** - Si scorrono entrambe le stringhe.
** - Ogni volta che un carattere di `s1` è trovato in `s2`, si avanza `i`.
** - Se si arriva alla fine di `s1`, significa che tutti i suoi caratteri
**   sono apparsi in ordine dentro `s2` → stampa "1\n".
** - Altrimenti → stampa "0\n".
**
** N.B.: Nel codice originale c'era un errore:
**       `if (s1[i] = s2[j])` deve essere `==`, non `=`.
*/
int main(int ac, char **av)
{
	if(ac == 3)
	{
		int i = 0;
		int j = 0;
		char *s1 = av[1];
		char *s2 = av[2];

		while(s1[i] && s2[j])
		{
			if(s1[i] == s2[j])
				i++;
			j++;
		}
		if(s1[i] == '\0')
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "\n", 1);
	return 0;
}
