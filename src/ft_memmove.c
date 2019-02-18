/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:35:35 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/14 14:38:45 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char * d;
	char * s;

	d = (char *)dst;
	s = (char *)src;

	if(dst < src)
	{
		i = 0;
		while (i < len)
		{
			*(d+i) = *(s+i);
			i++;
		}
	}
	else if(dst > src)
	{
		if(len == 0)
			return (dst);
		i = len - 1;
		while(1)
		{
			*(d+i) = *(s+i);
			if(i == 0)
				break;
			i--;
		}
	}
	return(dst);
}
