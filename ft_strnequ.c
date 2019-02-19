/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:14:26 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/13 18:25:32 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if(!s1 || !s2)
		return(0);
	if(ft_strncmp(s1,s2,n) == 0)
		return(1);
	return(0);
}
