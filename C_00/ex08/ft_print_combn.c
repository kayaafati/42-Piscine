#include <unistd.h>

void	print_combn(char	*num, int	num_size,	int	i,	char	x)
{
	if (i == num_size)
	{
		write(1, num, num_size);
		if (num[0] - '0' < 10 - num_size)
			write(1, ", ", 2);
	}
	else
	{
		while (x - '0' <= (10 - num_size) + i)
		{
			num[i] = x;
			print_combn(num, num_size, i + 1, x + 1);
			x++;
		}
	}
}

void	ft_print_combn(int	n)
{
	char	arr[9];

	if (n > 0 && n < 10)
		print_combn(arr, n, 0, '0');
}
