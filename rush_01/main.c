/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:45:53 by jyim              #+#    #+#             */
/*   Updated: 2022/08/28 16:27:01 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	gen(int **clues);
void	ft_error(void);

int	c_argv(char **argv)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (argv[1][++i])
	{
		if (argv[1][i] < '0' || argv[1][i] > '4')
			return (-1);
		n++;
		if (argv[1][i + 1] == '\0')
			return (n);
		else if (argv[1][i + 1] != ' ')
			return (-1);
		i++;
	}
	return (n);
}

int	**argv_to_tab(char **argv)
{
	int		i;
	int		j;
	int		**clues;

	clues = malloc(sizeof(int *) * 4);
	i = -1;
	j = 0;
	while (argv[1][++i])
	{
		if (j % 4 == 0)
			clues[j / 4] = malloc(sizeof(int) * 4);
		clues[j / 4][j % 4] = argv[1][i] - '0';
		if (argv[1][i + 1] != '\0')
			i++;
		j++;
	}
	return (clues);
}

int	main(int arg, char **argv)
{
	int	**clues;
	int	num;

	num = c_argv(argv);
	if (arg != 2)
	{
		ft_error();
		return (0);
	}
	else if (num == -1 || num < 16 || num % 4 != 0)
	{
		ft_error();
		return (0);
	}
	clues = argv_to_tab(argv);
	gen(clues);
}
