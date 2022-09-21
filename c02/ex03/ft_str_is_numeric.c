/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:24:45 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/30 11:25:06 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
 
int	ft_str_is_numeric(char *str);

int main(void)
{
	char a[100] = "0123";
	int d;

	ft_str_is_numeric(a);
	d = ft_str_is_numeric(a);
	printf("%d", d);
}
*/
int	ft_str_is_numeric(char *str)
{	
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
