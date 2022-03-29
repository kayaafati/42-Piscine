#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = argc - 1;
	y = 0;
	if (argc > 1)
	{
		while (x > 0)
		{
			y = 0;
			while (argv[x][y] != '\0')
			{
				write(1, &argv[x][y], 1);
				y++;
			}
			write(1, "\n", 1);
			x--;
		}
	}
	return (0);
}
