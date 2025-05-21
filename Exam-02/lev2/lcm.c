/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:19:02 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:19:02 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calcola il Massimo Comun Divisore (MCD) tra `a` e `b` usando
** l'algoritmo di Euclide.
**
** Esempio:
** pgdc(20, 8) → 4
*/
unsigned int pgdc(unsigned int a, unsigned int b)
{
	while(b != 0)
	{
		unsigned int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

/*
** Calcola il Minimo Comune Multiplo (LCM) tra `a` e `b`.
**
** Formula: LCM(a, b) = (a / GCD(a, b)) * b
**
** - Se uno dei due valori è ≤ 0, ritorna 0.
** - Per evitare overflow: eseguire prima la divisione, poi la moltiplicazione.
**
** Esempio:
** lcm(12, 18) → 36
**
** Nota: i parametri sono unsigned, ma il controllo `(int)a <= 0` forza
** la verifica di input negativi convertiti da chiamate errate.
*/
unsigned int lcm(unsigned int a, unsigned int b)
{
	if((int)a <= 0 || (int)b <= 0)
		return 0;
	return ((a / pgdc(a, b)) * b);
}

/*
** // Test:
** #include <stdio.h>
**
** int	main()
** {
** 	printf("%d\n", lcm(-3, -6));  // Output: 0 (input negativo)
** 	printf("%d\n", lcm(12, 18));  // Output: 36
** 	printf("%d\n", lcm(5, 7));    // Output: 35
** 	return 0;
** }
*/
