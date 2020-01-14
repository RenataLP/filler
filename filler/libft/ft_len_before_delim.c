/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_before_delim.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:12:27 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:11 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len_before_delim(const char *s, char c)
{
	char *s2;

	s2 = (char*)s;
	while (*s2 != c && *s2 != '\0')
		s2++;
	return (s2 - s);
}
