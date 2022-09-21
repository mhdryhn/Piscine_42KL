#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{	
		while(*argv[1])
		{	
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
			{	
				int i;
				int a;

				a = 0;
				i = *argv[1] - 96;
				while(a < i)
				{
					write(1, argv[1], 1);
					a++;
				}
			}
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		write (1, "\n", 1);
		return (0);
	}
}
