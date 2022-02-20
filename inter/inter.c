#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_check(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
void	ft_inter(char *s1, char *s2)
{
	char	ret[999];
	int		y = 0;

	if (s1 && s2)
	{
		while (*s1)
		{
			//if s1 char is in s2 and if s1 char is not in ret
			if (ft_check(*s1, s2) && ft_check(*s1, ret) == 0)
				ret[y++] = *s1;
			s1++;
		}
	}
	ret[y] = '\0';
	ft_putstr(ret);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}