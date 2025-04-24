/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:42:33 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 19:42:33 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// int is_power_of_2(unsigned int n)
// {
//     if (n == 0)
//         return (0);
//     return ((n & (n - 1)) == 0);
// }

int         is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			return (0);
	}
	return (1);
}

// int main(int ac, char **av)
// {
//     unsigned int n = (unsigned int)atoi(av[1]);
//     if (ac == 2)
//     {
//         if (is_power_of_2(n))
//             printf ("%u is a power of 2 \n", n);
//         else
//             printf ("%u is NOT a power of 2 \n", n);
//     }
//     else
//         return(1);
//     return (0);    
// }