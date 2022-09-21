/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:58:39 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/26 23:57:48 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_str_is_printable(char *str);

int main(void)
{
	char a[100] = " ";
	int d;

	ft_str_is_printable(a);
	d = ft_str_is_printable(a);
	printf("%d", d);
}
*/
int	ft_str_is_printable(char *str)
{	
	int	i;

	i = 0;
	while (str[i] >= ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
