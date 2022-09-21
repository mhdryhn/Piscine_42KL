/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:25:24 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/05 17:59:33 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{	
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
/*
int main(void)
{
	char	a[100] = "        -++--1234abbaidoa6657";
	printf("%d", ft_atoi(a));
}
*/
