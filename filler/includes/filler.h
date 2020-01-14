/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:33:44 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/14 20:01:12 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft.h"
# include "get_next_line.h"

typedef struct s_point
{
    int x;
    int y;
}   t_point;

typedef struct s_player
{
    char id;
    t_point start
}   t_player;

typedef struct s_token
{
    int hight;
    int width;
    int size;
    char **data;
}   t_token;

typedef struct s_filler
{
    int inited;
    t_player player;
    t_player enemy;
    t_point target;
    t_token board;

}