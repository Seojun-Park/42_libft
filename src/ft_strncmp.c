/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:34:49 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/13 12:48:03 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(*s1 && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return((unsigned char)*s1 - (unsigned char)*s2);
}
