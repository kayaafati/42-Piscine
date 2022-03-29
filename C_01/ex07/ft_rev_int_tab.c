#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	c;

	a = 0;
	while (a <= size - 1)
	{
		c = tab[a];
		tab[a] = tab[size - 1];
		tab[size - 1] = c;
		a++;
		size--;
	}
}
