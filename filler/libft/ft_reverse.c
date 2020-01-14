/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:15:35 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:31 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse(char *s)
{
	int		i;
	int		j;
	int		len;
	char	c;

	i = 0;
	len = ft_strlen(s);
	j = len - 1;
	while (i < (len + 1) / 2)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
