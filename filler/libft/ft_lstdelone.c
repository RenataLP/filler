/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:13:03 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:14 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del) (void*, size_t))
{
	if (!alst || !(*alst) || !del)
		return ;
	del((void*)((*alst)->content), (*alst)->content_size);
	free(*alst);
	*alst = 0;
}
