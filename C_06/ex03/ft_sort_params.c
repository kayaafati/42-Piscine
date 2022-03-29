#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		y;
	char	*s;

	i = 0;
	while (++i < ac - 1)
	{
		y = i;
		while (++y < ac)
		{
			if (ft_strcmp(av[i], av[y]) > 0)
			{
				s = av[i];
				av[i] = av[y];
				av[y] = s;
			}
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
	return (0);
}
