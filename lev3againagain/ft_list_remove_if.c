#include <stdio.h>
#include "list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *temp;
    t_list  *current;

    if(begin_list == NULL || *begin_list == NULL)
        return;
    current = *begin_list;
    if(cmp((*begin_list)->data, data_ref) == 0)
    {
        temp = *begin_list;
        *begin_list = current->next;
        free(temp);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(&current->next, data_ref, cmp);
}
