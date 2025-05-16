#include "ft_list.h"


void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{

	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
/*
void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

t_list *create_node(char *str)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->data = str;
    node->next = NULL;
    return node;
}

int main(void)
{
    // Creo i nodi
    t_list *node1 = create_node("Ciao");
    t_list *node2 = create_node("Gabriela");
    t_list *node3 = create_node("42 Roma");

    // Li collego
    node1->next = node2;
    node2->next = node3;

    // Applico ft_list_foreach
    ft_list_foreach(node1, &print_data);

    // Libero la memoria
    free(node3);
    free(node2);
    free(node1);

    return 0;
}
*/
