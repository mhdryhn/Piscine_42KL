#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 1;
	int b = 2;
	int *c = &a;
	int *d = &b;
	ft_swap(c,d);
	printf("%d\n", a);
	printf("%d", b);
}
