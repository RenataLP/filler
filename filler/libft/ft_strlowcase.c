/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:16:59 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:56 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	char *str2;

	str2 = str;
	while (*str2 != 0)
	{
		if (*str2 >= 65 && *str2 <= 90)
			*str2 += ' ';
		str2++;
	}
	return (str);
}
