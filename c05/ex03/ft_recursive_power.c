/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:09:32 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/01 19:09:34 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{	
	int	value;

	value = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power != 1)
		value = nb * ft_recursive_power(nb, (power - 1));
	return (value);
}
/*
int	 main(void)
{
	printf("%d", ft_recursive_power(7,3));
}
*/
