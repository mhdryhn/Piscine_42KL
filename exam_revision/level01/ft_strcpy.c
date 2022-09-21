//#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	while(*s1 != '\0')
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';
	return (s2);
}
/*
int	main(void)
{	
	int i;
	char a[100] = "";
	char b[100] = "ihsid";
	ft_strcpy(a,b);

	i = 0;
	while(b[i] != '\0')
	{
		write(1, &b[i], 1);
		i++;
	}
}
*/

