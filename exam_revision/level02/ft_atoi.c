#include <stdio.h>

int	ft_atoi(const char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	while(*str == ' ' || *str == '\t' || *str == '\f' || *str == '\r'
		   	|| *str == '\v' || *str == '\n')
		str++;
	while( *str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}	
	while ( *str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return(num * sign);
}

int	main(void)
{
	printf("%d", ft_atoi("    ----+----1234282900asas54"));
}
