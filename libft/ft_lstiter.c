/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjander <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:45:42 by mjander           #+#    #+#             */
/*   Updated: 2019/06/14 12:45:52 by mjander          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
