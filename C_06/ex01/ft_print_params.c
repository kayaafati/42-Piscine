#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	if (argc > 1)
	{
		while (x < argc)
		{
			y = 0;
			while (argv[x][y] != '\0')
			{
				write(1, &argv[x][y], 1);
				y++;
			}
			write(1, "\n", 1);
			x++;
		}
	}
	return (0);
}
