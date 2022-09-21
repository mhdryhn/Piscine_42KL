/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:17:33 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/28 23:18:21 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i];
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}		
	return (str);
}
/*
int	main(void)
{
	char str[] = "JACKZ";
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
*/
