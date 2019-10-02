#include "dlst.h"

t_dlst_node		*ft_dlstnew(void *blob, size_t size, int (*type)(void *))
{
	t_dlst_node *lst;

	if (!(lst = ALLOC(t_dlst_node *, 1, sizeof(t_dlst_node))))
		return (NULL);
	lst->blob = blob ? ft_memdup(blob, size) : NULL;
	lst->size = blob ? size : 0;
	lst->type = type;
	return (lst);
}

void			ft_dlstdel(void (*del)(void *, size_t), t_dlst *alst)
{
	t_dlst walk;
	t_dlst tmp;

	if (!SAFE_PTRVAL(alst))
		return ;
	walk = *alst;
	while (walk)
	{
		ft_putendl("here");
		tmp = walk;
		walk = walk->next;
		ft_dlstdelone(del, &tmp);
	}
	*alst = NULL;
}

void			ft_dlstdelone(void (*del)(void *, size_t), t_dlst *anode)
{
	if (!SAFE_PTRVAL(anode))
		return ;
	if ((*anode)->prev)
		(*anode)->prev->next = (*anode)->next;
	if ((*anode)->next)
		(*anode)->next->prev = (*anode)->prev;
	(*del)((*anode)->blob, (*anode)->size);
	free(*anode);
	*anode = NULL;
}

void			ft_dlstpush(t_dlst *alst, t_dlst_node *e)
{
	t_dlst walk;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = e;
		return ;
	}
	walk = *alst;
	while (walk->next)
		walk = walk->next;
	e->prev = walk;
	walk->next = e;
}

void			ft_dlstadd(t_dlst *alst, t_dlst_node *e)
{
	t_dlst tmp;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = e;
		return ;
	}
	tmp = *alst;
	tmp->prev = e;
	*alst = e;
	e->next = tmp;
}

t_dlst_node			*ft_dlstpop(t_dlst *alst)
{
	t_dlst poped;
	t_dlst walk;

	if (!SAFE_PTRVAL(alst))
		return NULL;
	walk = *alst;
	while (walk->next)
		walk = walk->next;
	if (walk->prev)
		walk->prev->next = walk->next;
	poped = walk;
	return poped;
}

t_dlst_node			*ft_dlstpeek(t_dlst *alst)
{
	t_dlst peeked;
	t_dlst tmp;

	if (!SAFE_PTRVAL(alst))
		return NULL;
	tmp = *alst;
	peeked = tmp;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	*alst = tmp->next;
	return peeked;
}
