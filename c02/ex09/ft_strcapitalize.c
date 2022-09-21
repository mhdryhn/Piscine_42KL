/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:51:45 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/30 12:52:03 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if ((str[i] == ' ' || str[i] == '+' || str[i] == '-')
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] = str [i + 1] - 32;
		if (i != 0 && str[i] >= 'A' && str[i] <= 'Z' && str[i -1] != ' '
			&& str[i - 1] != '+' && str[i - 1] != '-')
			str[i] = str[i] + 32;
		else
			str[i] = str [i];
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[100] = "salUt, comMent tu vas ? 42MoTs quarante-Deux; cinqUante+Et+Un";

	printf("%s", ft_strcapitalize(a));
}
*/
