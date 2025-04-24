/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:37:18 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/24 16:37:18 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int do_op(int n1, char *op, int n2)
{
    int res;

    res = 0;

    if (*op == '+')
        res = n1 + n2;
    if (*op == '-')
        res = n1 - n2;
    if (*op == '*')
        res = n1 * n2;
    if (*op == '/')
        res = n1 / n2;
    if (*op == '%')
        res = n1 % n2;
    return (res);
}

int main (int ac, char **av)
{
    int n1;
    int n2;
    int res;

    if (ac == 4)
    {
        n1 = atoi(av[1]);
        n2 = atoi (av[3]);
        res = do_op(n1, av[2], n2);
        printf("%d\n", res);
    }
    else
        write(1, "\n", 1);
    return(0);
}