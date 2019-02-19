/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:55:53 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/13 09:58:34 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	while(i >= 0)
	{
		if(s[i] == (char)c)
		{
			return((char *)s + i);
		}
		i--;
	}
	return(NULL);
}
