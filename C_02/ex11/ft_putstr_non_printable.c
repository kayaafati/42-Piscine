#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}


static void	ft_print_hexa(char a, char *hex)
{
	if (a > 16)
	{
		ft_print_hexa(a / 16, hex);
		ft_print_hexa(a % 16, hex);
	}
	else
		ft_putchar(hex[a]);
}

void		ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hexa(str[i], hex);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

