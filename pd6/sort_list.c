typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *next_node;
	t_list *current;
	int tmp;
	int swap = 1;

	while (swap)
	{
		swap = 0;
		current = lst;
		if (current)
			next_node = current->next;
		else 
			next_node = 0;
		while (current && next_node)
		{
			if(!cmp(current->data, next_node->data))
			{
				tmp = current->data;
				current->data = next_node->data;
				next_node->data = tmp;
				swap = 1;
			}
			current = current->next;
			next_node = next_node->next;
		}
	}
	return(lst);
}
