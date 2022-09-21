/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:05:44 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/20 22:40:19 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_output(char d, char e, char f);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
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

void	print_output(char d, char e, char f)
{
	char	a;
	char	b;
	char	c;

	a = d;
	b = e;
	c = f;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write (1, ", ", 2);
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
