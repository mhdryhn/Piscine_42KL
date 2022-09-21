/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:58:39 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/26 23:07:07 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_str_is_alpha(char *str);

int main(void)
{
	char a[100] = "\0";
	int d;

	ft_str_is_alpha(a);
	d = ft_str_is_alpha(a);
	printf("%d", d);
*/
int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
