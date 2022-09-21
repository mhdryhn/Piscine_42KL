#include <unistd.h>

void	ft_putchar(char *str)
{
	write(1, str, 1);
}

int	main(int argc, char *argv[])
{
	if(argc == 4)
	{
		while(*argv[1] != '\0')
		{
			if (argv[2][1] == '\0')
			{	
				if(*argv[1] == *argv[2])
					ft_putchar(argv[3]);
				else
					ft_putchar(argv[1]);
			}
			else
			{
				write(1, "\n", 1);
				return(1);
			}
			argv[1]++;
		}
	}
	else
		write(1, "\n", 1);
}
