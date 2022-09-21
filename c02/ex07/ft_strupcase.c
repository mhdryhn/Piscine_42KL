/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:07:48 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/28 23:07:59 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i];
		}
		i++;
	}		
	return (str);
}
/*
int	main(void)
{
	char str[] = "joeeee";
	int i;

	i = 0;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
*/
