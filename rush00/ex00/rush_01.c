/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:54:45 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/28 06:33:59 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//Counts Number of Characters In String
int	str_len(char *argv[])
{
	int	i;

	i = 0;
	while (*argv[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	sp_ck;
	int	iu;
	int	while_break;
	int a;

	if (argc == 2)
	{
		sp_ck = 1;
		iu = 0;
		while_break = 1;
		while (sp_ck < 30 && iu < 31 && while_break == 1)
		{	
			if (argv[1][sp_ck] == ' ' && (argv[2][iu] + argv[2][iu + 8]) <= '5'
				&& argv[1][iu] >= '1' && argv[1][iu] <= '4'
				)
			{
				sp_ck += 2;
				iu += 2;
			}
			else
				write(1, "Error\n", 6);
				while_break = 2;
		}		
	}		
	else
		write(1, "Error\n", 6);
}
