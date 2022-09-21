/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:20:21 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/30 00:22:56 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	stlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	i;

	a = stlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char a[100] = "Hello, ";
	char b[] = "My Name is Rayhan";

	printf("%s", ft_strcat(a,b));
}
*/
