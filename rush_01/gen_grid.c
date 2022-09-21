/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:46:33 by jyim              #+#    #+#             */
/*   Updated: 2022/08/28 16:24:57 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	i_input(int **table, int **clues);

void	gen(int **clues)
{
	int	i;
	int	j;
	int	**table;

	i = -1;
	table = malloc(sizeof(int *) * 4);
	while (++i < 4)
	{
		j = -1;
		table[i] = malloc(sizeof(int) * 4);
		while (++j < 4)
			table[i][j] = 0;
	}
	i_input(table, clues);
}
