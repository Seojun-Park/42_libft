/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:22:38 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/17 19:17:14 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t count_words(char const * s, char c)
{
	size_t cnt;

	cnt = 0;
	while (*s == c)
		s++;
	while(*s)
	{
		while(*s == c)
			s++;
		while(*s && *s != c)
			s++;
		if (*s || *s == '\0')
			cnt++;
	}
	return(cnt);
}
/*
size_t word_len(char const *s, char c)
{
	size_t len;

	len = 0;
	while(*s == c)
		s++;
	while(*s && *s != c)
	{
		s++;
		len++;
	}
	return(len);
}
*/
/*
void * ft_memalloc(size_t size)
{
	unsigned char *new;

	new = NULL;
	if(size)
	{
		if(!(new = (unsigned char *)malloc(size)))
			return(NULL);
		while(size)
			new[--size] = 0;
	}
	return((void *)new);
}
*/
char ** ft_strsplit(char const *s, char c)
{
	char **a;
	size_t inside_a_word;
	size_t word_index;
	size_t i;
	size_t start;

	if(!s)
		return(NULL);
	if(!(a = (char **)ft_memalloc((count_words(s, c) + 2) * sizeof(char *))))
		return(NULL);
	word_index = 0;
	inside_a_word = 0;
	i = -1;
	start = 0;
	while(s[++i])
	{
		if(inside_a_word && s[i] == c)
			a[word_index++] = ft_strsub(s, start, i - start);
		if(!inside_a_word && s[i] != c)
			start = i;
		inside_a_word = (s[i] == c) ? 0 : 1;
	}
	if(inside_a_word)
		a[word_index] = ft_strsub(s, start, i - start);
	return(a);
}