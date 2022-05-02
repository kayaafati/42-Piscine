#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		z = i + 1;
		while (base[z])
		{
			if (base[i] >= base[z]) 
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}


void		ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if(ft_check_base(hex))
	{
		while (str[i])
		{
			if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
			{
				ft_putchar('\\');
				if (str[i] < 16)
				{
					ft_putchar('0'); 
					ft_putchar(hex[(int)str[i]]);
				}
				else
				{
					ft_putchar(hex[(int)str[i]/16]);
					ft_putchar(hex[(int)str[i]%16]);
				}
				
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}


int     main(void)
{
    ft_putstr_non_printable("y\tu\v_sd\nf");
	ft_putchar('\n');
    return (0);
}
