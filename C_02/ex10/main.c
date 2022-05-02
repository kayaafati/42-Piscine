#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < (n - 1))) 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}


int 	main(void)
{
	char	arrr[] = {"Helloworld.helloworld.helloworld.helloworld.helloworld"};
	char	x[22];

	ft_strlcpy(x, arrr, 22);
	ft_putstr(x);
	return (0);
}
