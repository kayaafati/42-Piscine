#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	x;

	i = 1;
	j = 0;
	x = 0;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			i *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		j = (j * 10) + (str[x] - '0');
		x++;
	}
	return (j * i);
}
