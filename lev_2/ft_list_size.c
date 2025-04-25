/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:44:11 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/25 21:44:11 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int ft_list_size(t_list *begin_list)
{
    int count = 0;

    while (begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return (count);
}

// int	main(void)
// {
// 	int n = 0;

// 	t_list *c = malloc(sizeof(*c));
// 	c->next = 0;
// 	c->data = &n;

// 	t_list *b = malloc(sizeof(*b));
// 	b->next = c;
// 	b->data = &n;

// 	t_list *a = malloc(sizeof(*a));
// 	a->next = b;
// 	a->data = &n;

// 	printf("%d\n", ft_list_size(a));
// }