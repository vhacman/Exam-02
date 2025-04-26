/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:52:34 by vhacman           #+#    #+#             */
/*   Updated: 2025/04/26 12:52:34 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list.h>

void	swap_values(t_list *a, t_list *b)
{
	int	temp;

	temp = a->data;
	a->data = b->data;
	b->data = temp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swapped;
	t_list	*cur;

	if (!lst)
		return(NULL);
	swapped = 1;
	while(swapped)
	{
		swapped = 0;
		cur = lst;
		while (cur && cur->next)
		{
			if(!cmp(cur->data, cur->next->data))
			{
				swap_values(cur, cur->next);
				swapped = 1;
			}
			cur = cur->next;
		}
	}
	return (lst);
}
