/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:33:02 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/30 00:40:30 by mrayhan          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				a;

	a = stlen(dest);
	i = 0;
	while (src[i] != '\0' && i < n)
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

	printf("%s", ft_strncat(a,b,10));
}
*/
