/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:12:21 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/11 19:36:43 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
	char *p;
	p = (char *)b;
	size_t i;

	i = 0;
	while(i < len)
	{
		*(p + i) = (unsigned char) c;
		i++;
	}
	return(b);
}
