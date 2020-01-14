/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:12:52 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:13 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *,
size_t))
{
	t_list	*ptr;

	if (!alst || !*alst || !del)
		return ;
	ptr = (*alst)->next;
	while (ptr)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = ptr;
		ptr = ptr->next;
	}
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = 0;
}
