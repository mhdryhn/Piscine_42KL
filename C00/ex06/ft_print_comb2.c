/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 06:54:42 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/20 19:05:49 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 0;
	b = 0;
	c = 0
	d = 0;
	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{

				if (a != b && b != c && c != a && a < b && b < c)
				{	
	
					print_output(a, b, c);
				}
				c++;
			}	
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}	



