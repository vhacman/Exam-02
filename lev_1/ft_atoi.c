/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:37:00 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 17:37:00 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that converts the string argument str to an integer (type int)
and returns it.
It works much like the standard atoi(const char *str) function, see the man.
Your function must be declared as follows:
int	ft_atoi(const char *str);*/
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

// int main(int argc, char **argv)
// {
//     printf("ft_atoi(\"%s\") = %d\n", argv[1], ft_atoi(argv[1]));
//     printf("atoi(\"%s\") = %d\n", argv[1], atoi(argv[1]));
//     return(0);
// }