/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:53:31 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/01 22:56:38 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	value;

	value = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			value = value * nb;
			power--;
		}
		return (value);
	}
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(1,0));
}
*/
