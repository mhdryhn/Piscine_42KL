#include <unistd.h>

int ft_strlen(char *str)
{
	int count;
	count = 0;
	while (str[count])
		count++;
	return (count);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int a;

		a = ft_strlen(argv[1]);
		while (a != 0)
		{
			write(1, &argv[1][a - 1], 1);
			a--;
		}
	}
	else
		write (1, "\n", 1);
}
