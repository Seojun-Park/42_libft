/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:14:26 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/19 19:02:48 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if(s1 == NULL || *s2 == NULL)
		return(0);
	while(*s1 && *s2 && i < n)
	{
		if(*s1 != *s2)
			return(0);
		s1++;
		s2++;
		i++;
	}
	return(1);
}
