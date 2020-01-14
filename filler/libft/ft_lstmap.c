/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:13:34 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:15 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_del_all_lst(t_list **l)
{
	t_list	*ptr;

	ptr = (*l)->next;
	while (ptr)
	{
		free((*l)->content);
		(*l)->content = 0;
		free(*l);
		*l = 0;
		*l = ptr;
		ptr = ptr->next;
	}
	free((*l)->content);
	(*l)->content = 0;
	free(*l);
	*l = 0;
}

static void	ft_push_lst_back(t_list **l, t_list *new_lst)
{
	t_list*ptr;

	ptr = *l;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new_lst;
	new_lst->next = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*l;
	t_list	*l_i;

	if (!lst || !f)
		return (0);
	l = f(lst);
	l->next = 0;
	while (lst->next)
	{
		lst = lst->next;
		if (!(l_i = f(lst)))
		{
			ft_del_all_lst(&l);
			return (0);
		}
		ft_push_lst_back(&l, l_i);
	}
	return (l);
}
