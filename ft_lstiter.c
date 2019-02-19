/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:12:17 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/19 15:13:46 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *ptr;

	ptr = lst;
	while(ptr)
	{
		f(ptr);
		ptr=ptr->next;
	}
}
