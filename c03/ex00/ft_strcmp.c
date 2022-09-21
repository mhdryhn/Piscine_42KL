/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrayhan <mhd.ryhn7@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:23:20 by mrayhan           #+#    #+#             */
/*   Updated: 2022/08/29 22:23:56 by mrayhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main() {
   char leftStr[] = "Hello";
   char rightStr[] = "Hello";
   int result = ft_strcmp(leftStr, rightStr);

   if (result==0)
      printf("Strings are equal");
   else
      printf("Strings are unequal");
   printf("\nValue returned by strcmp() is:  %d" , result);
   return 0;
}
*/
