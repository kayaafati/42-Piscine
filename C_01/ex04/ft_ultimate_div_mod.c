#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divi;
	int	mod;

	divi = *a / *b;
	mod = *a % *b;
	*a = divi;
	*b = mod;
}
