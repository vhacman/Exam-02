#include "list.h"
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list **curr = begin_list;
	t_list *tmp;

	while (*curr)
	{
		if (cmp((*curr)->data, data_ref) == 0)
		{
			tmp = *curr;
			*curr = (*curr)->next;
			free(tmp);
		}
		else
			curr = &(*curr)->next;
	}
}