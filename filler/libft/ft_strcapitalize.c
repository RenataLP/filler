/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:15:47 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:33 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	char *pstr;

	pstr = str;
	pstr = ft_strlowcase(pstr);
	if (*pstr >= 'a' && *pstr <= 'z')
		*pstr -= ' ';
	while (*pstr != '\0')
	{
		pstr++;
		if (*pstr >= 'a' && *pstr <= 'z'
				&& (*(pstr - 1) < 'a' || *(pstr - 1) > 'z')
				&& (*(pstr - 1) < '0' || *(pstr - 1) > '9')
				&& (*(pstr - 1) < 'A' || *(pstr - 1) > 'Z'))
			*pstr -= ' ';
	}
	return (str);
}
