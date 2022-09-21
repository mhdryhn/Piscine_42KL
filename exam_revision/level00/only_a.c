#include <unistd.h>

void	only_a(void)
{
	write (1, "a\n", 2);
}

int main(void)
{
	only_a();
}

