#include <unistd.h>

typedef struct s_list
{
	int     data;
	struct s_list   *next;
}       t_list;


t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list  *start = lst;
	int     swap;

	//Continua finché ci sono almeno due nodi consecutivi da confrontare.
	while(lst != NULL && lst->next != NULL)
	{
		if((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			//Dopo lo scambio, torni all’inizio della lista per ricontrollare tutto
			lst = start;
		}
		else
			lst = lst->next; // va avanti e controlla la coppia successiva
	}
	return start;
}
