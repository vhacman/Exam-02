#include "list.h"

void swap_value(t_list *a, t_list *b)
{
    int *temp;

    temp  = a->data;
    a->data = b->data;
    b->data = temp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     swapped = 1;
    t_list *current;

    while(swapped)
    {
        swapped = 0;
        current = lst;
        while(current && current->next)
        {   
            if(cmp(current->data, current->next->data) == 0)
            {
                swap_value(current, current->next);
                swapped = 1;
            }
            current = current->next;
        }
    }
    return(lst);
}
