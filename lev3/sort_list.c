#include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *start = lst;
	int swap;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return start;
}
