#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size - 1)
	{
		if (tab[x] > tab[x + 1])
		{
			j = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = y;
			x = -1;
		}
		x++;
	}
}
