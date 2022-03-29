#include <unistd.h>

void	ft_putchar(char c, char x, char y)
{
	write(1, &c, 1);
	write(1, &x, 1);
	write(1, &y, 1);
	if (!(c == '7' && x == '8' && y == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	n;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			n = b + 1;
			while (n <= '9')
			{
				ft_putchar(a, b, n);
				n++;
			}
			b++;
		}
		a++;
	}
}
