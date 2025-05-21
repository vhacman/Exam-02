
typedef struct    s_list
{
	struct s_list *next;
	void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	while(begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return(count);
}