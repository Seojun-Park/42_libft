/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:58:24 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/13 15:00:35 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isdigit(int c)
{
	return(c >= '0' && c <= '9');
}