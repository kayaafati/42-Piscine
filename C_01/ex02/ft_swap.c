#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	pam;

	pam = *a;
	*a = *b;
	*b = pam;
}
