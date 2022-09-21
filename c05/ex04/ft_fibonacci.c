/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:54:39 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/01 23:55:11 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{	
	int	fib_value;

	fib_value = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		fib_value = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (fib_value);
	}
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(-1));
}
*/
