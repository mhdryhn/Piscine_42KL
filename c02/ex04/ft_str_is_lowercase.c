/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:58:39 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/26 23:53:18 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_str_is_lowercase(char *str);

int main(void)
{
	char a[100] = "\0";
	int d;

	ft_str_is_lowercase(a);
	d = ft_str_is_lowercase(a);
	printf("%d", d);
}
*/
int	ft_str_is_lowercase(char *str)
{	
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
