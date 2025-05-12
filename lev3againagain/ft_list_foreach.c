typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;


void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

// #include <stdlib.h>
// #include <stdio.h>

// void print_str(void *data)
// {
//     printf("%s\n", (char *)data);
// }

// t_list *create_node(char *str)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->data = str;
//     node->next = NULL;
//     return node;
// }

// int main(void)
// {
//     t_list *n1 = create_node("hello");
//     t_list *n2 = create_node("world");
//     t_list *n3 = create_node("test");

//     n1->next = n2;
//     n2->next = n3;

//     ft_list_foreach(n1, print_str);

//     // libera memoria se necessario
//     free(n1);
//     free(n2);
//     free(n3);

//     return 0;
// }
