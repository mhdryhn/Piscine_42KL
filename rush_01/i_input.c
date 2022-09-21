/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_input.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:49:58 by jyim              #+#    #+#             */
/*   Updated: 2022/08/28 16:25:45 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_printarray(int **table);

void	i_hori(int **table, int **clues, int i)
{
	int	j;

	if (clues[0][i] == 4)
	{
		j = -1;
		while (++j < 4)
			table[j][i] = j + 1;
	}
	else if (clues[0][i] == 1)
		table[0][i] = 4;
	if (clues[1][i] == 4)
	{
		j = -1;
		while (++j < 4)
			table[3 - j][i] = j + 1;
	}
	else if (clues[1][i] == 1)
		table[3][i] = 4;
}

void	i_vert(int **table, int **clues, int i)
{
	int	j;

	if (clues[2][i] == 4)
	{
		j = -1;
		while (++j < 4)
			table[i][j] = j + 1;
	}
	else if (clues[2][i] == 1)
		table[i][0] = 4;
	if (clues[3][i] == 4)
	{
		j = -1;
		while (++j < 4)
			table[i][3 - j] = j + 1;
	}
	else if (clues[3][i] == 1)
		table[i][3] = 4;
}

void	i_input(int **table, int **clues)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		i_hori(table, clues, i);
		i_vert(table, clues, i);
	}
	ft_printarray(table);
}
