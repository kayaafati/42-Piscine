#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	i = 3;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}
