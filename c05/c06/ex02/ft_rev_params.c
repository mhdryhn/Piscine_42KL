/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:08:41 by mrayhan           #+#    #+#             */
/*   Updated: 2022/09/06 12:08:56 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;
	int	s;

	if (argc > 1)
	{
		s = argc - 1;
		j = 0;
		while (s > 0)
		{
			while (argv[s][j] != '\0')
			{
				write(1, &argv[s][j], 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			s--;
		}
		return (0);
	}
	else
		return (1);
}
