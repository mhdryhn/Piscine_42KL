/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:58:39 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/26 23:49:58 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_str_is_uppercase(char *str);

int main(void)
{
	char a[100] = "\0";
	int d;

	ft_str_is_uppercase(a);
	d = ft_str_is_uppercase(a);
	printf("%d", d);
}
*/
int	ft_str_is_uppercase(char *str)
{	
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
