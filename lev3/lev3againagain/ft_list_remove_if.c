typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	while (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			tmp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(tmp);
		}
		else
			begin_list = &(*begin_list)->next;
	}
}

// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>
// int cmp(void *a, void *b)
// {
//     return strcmp((char *)a, (char *)b);
// }

// t_list *new_node(char *str)
// {
//     t_list *n = malloc(sizeof(t_list));
//     n->data = str;
//     n->next = NULL;
//     return n;
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%s\n", (char *)lst->data);
//         lst = lst->next;
//     }
// }

// int main(void)
// {
//     t_list *list = new_node("one");
//     list->next = new_node("two");
//     list->next->next = new_node("one");

//     printf("Before:\n");
//     print_list(list);

//     ft_list_remove_if(&list, "one", cmp);

//     printf("After:\n");
//     print_list(list);

//     // Free remaining nodes
//     while (list)
//     {
//         t_list *tmp = list;
//         list = list->next;
//         free(tmp);
//     }

//     return 0;
// }