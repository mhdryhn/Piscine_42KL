/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:09:44 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/01 19:09:47 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb != 1)
		factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(-1));
	return (0);
}
*/
