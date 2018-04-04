#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list		*iter_data;
	int			i;

	iter_data = begin_list;
	i = 0;
	while (iter_data)
	{
		i++;
		iter_data = iter_data->next;
	}
	return (i);
}
