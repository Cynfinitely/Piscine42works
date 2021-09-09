/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnari <cnari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 04:56:00 by cnari             #+#    #+#             */
/*   Updated: 2021/09/09 05:03:18 by cnari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __list_h__
#define __list_h__

typedef struct s_list t_list;

struct s_list
{
	char *str;
	t_list *next;
};

t_list *add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
