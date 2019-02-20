/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:48:26 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/19 17:00:43 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res * sign);
}
