#include <unistd.h>

void	only_z(void)
{
	write (1, "z\n", 2);
}

int main(void)
{
	only_z();
}
