#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (str[x] != '\0')
	{
		if (i == 0 && (str[x] >= 'a' && str[x] <= 'z'))
		{
			str[x] = str[x] - ('a' - 'A');
			i++;
		}
		else if (i > 0 && (str[x] >= 'A' && str[x] <= 'Z'))
			str[x] = str[x] - ('a' - 'A');
		else if ((str[x] < '0') || (str[x] > '9' && str[x] < 'A')
			|| (str[x] > 'Z' && str[x] < 'a') || (str[x] > 'z'))
			i = 0;
		else
			i++;
		x++;
	}
	return (str);
}
