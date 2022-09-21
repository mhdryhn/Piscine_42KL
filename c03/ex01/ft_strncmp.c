/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:06:24 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/29 22:06:29 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main() {
   char leftStr[] = "H";
   char rightStr[] = "Hellf";
   int result = ft_strncmp(leftStr, rightStr,4);

   if (result==0)
      printf("Strings are equal");
   else
      printf("Strings are unequal");
   printf("\nValue returned by strcmp() is:  %d" , result);
   return 0;
}
*/
