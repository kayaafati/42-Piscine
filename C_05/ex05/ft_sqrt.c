#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb > 0)
	{
		while (x * x <= nb)
		{
			if (x * x == nb)
				return (x);
			else if (x >= 46341)
				return (0);
			x++;
		}
	}
	return (0);
}
