#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>


t_list		*create_node(int valor, size_t size)
{
	t_list		*holder;

	holder = malloc(sizeof(t_list));
	holder->next = NULL;
	holder->data = malloc(size);
	holder->data = (valor);
	return (holder);
}

void		add_top(t_list **lista, t_list *new)
{
	t_list *temp;

	temp = *lista;
	new->next = temp;
	*lista = new;
}

void		add_list(t_list **lista, t_list *new)
{
	if (*lista)
		add_top(lista, new);
	else
		*lista = new;
}

void		print_list(t_list **lista)
{
	t_list	*temp;

	temp = *lista;
	while (*lista)
	{
		printf("pendejada %d\n", (*lista)->data);
		*lista = (*lista)->next;
	}
}



/*
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*temp;
	t_list		*remove;

	temp = *begin_list;
	while (temp)
	{
		if ((cmp(data_ref, (void*)temp->data)) == 0)
		{
//			if((*begin_list)->next)
//			{
				remove = temp;
				temp = temp->next;
				free(remove);
//			}
//			else
//				free(*begin_list);
		}
		else
			temp = temp->next;
	}
}
*/

/*
void	ft_list_remove_if(t_list **begin_list, void *content_ref, int (*cmp)())
{
	t_list	*to_free;

	if (*begin_list)
	{
		if (cmp((*begin_list)->data, content_ref) == 0)
		{
			to_free = *begin_list;
			*begin_list = (*begin_list)->next;
			free(to_free);
			ft_list_remove_if(begin_list, content_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, content_ref, cmp);
	}
}
*/


void	ft_list_remove_if(t_list **begin_list, void *content_ref, int (*cmp)())
{
	t_list	*free_mis_bolas;
	
	if (*begin_list)
	{
		if(cmp(content_ref, (*begin_list)->data) == 0)
		{
			free_mis_bolas = *begin_list;
			*begin_list = (*begin_list)->next;
			free(free_mis_bolas);
			ft_list_remove_if(&(*begin_list)->next, content_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, content_ref, cmp);
	}
}

void	ft_list_remove(t_list **begin_list)
{
	t_list		*iterdata;
	t_list		*iter;

	iter = *begin_list;
	while(iter)
		{
			iterdata = iter->next;
			free(iter);
			iter = iterdata;
		}
}



int		compare(void *data, void *data1)
{
	if (data == data1)
		return (0);
	return (1);
}


int main(void)
{
	t_list	*lista;
	int		i = 20;
	int		(*cmp)();


	cmp = compare;
	lista = NULL;
	add_list(&lista, create_node(15, sizeof(int)));
	add_list(&lista, create_node(17, sizeof(int)));
	add_list(&lista, create_node(20, sizeof(int)));
	add_list(&lista, create_node(65, sizeof(int)));
//	ft_list_remove_if(&lista, (void *)65, cmp);
	ft_list_remove(&lista);
	print_list(&lista);
}

