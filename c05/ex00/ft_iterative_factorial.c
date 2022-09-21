/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:47:46 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/01 21:48:50 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}	
	}
	return (fact);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(-1));
}
*/
