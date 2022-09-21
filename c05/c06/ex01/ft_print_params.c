/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:16:08 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/06 12:17:48 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;
	int	c;

	if (argc > 1)
	{
		c = 1;
		j = 0;
		while (c < argc)
		{
			while (argv[c][j] != '\0')
			{
				write(1, &argv[c][j], 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			c++;
		}
		return (0);
	}
	else
		return (1);
}
