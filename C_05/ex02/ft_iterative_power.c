#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
		return (0);
	while (0 < power)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
