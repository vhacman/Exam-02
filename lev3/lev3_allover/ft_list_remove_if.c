#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;

	while(*begin_list)
	{
		if(cmp((*begin_list)->data, data_ref) == 0)
		{
			temp = (*begin_list)->data;
			(*begin_list)->data = (*begin_data)->next;
			free(temp);
		}
		else
			begin_list = &(*begin_list)->next;
	}
}
