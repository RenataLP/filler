/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:35:34 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/14 20:01:13 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int main(void)
{
    t_filler    filler;
    char    *line;

    ft_bzero(&filler, sizeof(t_filler));
    line = NULL;
    filler.inited = 0;
    if (get_next_line(0, &line) && line && ft_strlen(line) > 10 && !ft_strncmp(line, "$$$ exec p", 10))
}