/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:53:37 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/19 14:58:23 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list * ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new =(t_list *)ft_memalloc(sizeof(t_list));
	if(new == NULL)
		return(NULL);
	if(content == 0)
	{
		new->content_size = 0;
		new->next = 0;
	}
	else
	{
		new->content=ft_memalloc(content_size);
		if(new->content == 0)
			return(0);
		ft_memcpy(new->content, content, content_size);
	}
	return(new);
}
