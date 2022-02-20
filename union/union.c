#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char c, char *str)
{
	int		i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}
void	ft_putstr(char *str)
{
	int		i = 0;
	if (str == NULL)
		return ;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_union(char *s1, char *s2)
{
	char	ret[999];
	int		y = 0;

	if (s1 != NULL)
	{
		while (*s1)
		{
			if (ft_check(*s1, ret))
				ret[y++] = *s1;
			s1++;
		}
	}
	if  (s2 != NULL)
	{
		while (*s2)
		{
			if (ft_check(*s2, ret))
				ret[y++] = *s2;
			s2++;
		}
	}
	ret[y] = '\0';
	ft_putstr(ret);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}