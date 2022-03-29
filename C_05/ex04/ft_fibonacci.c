#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (index);
	if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
