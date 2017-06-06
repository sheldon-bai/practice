#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		is_bracket(char c)
{
	if (c == '{' || c == '}' || c == '[' || c == ']' || c == '(' || c == ')')
		return (1);
	else
		return (0);
}

int		ft_addloop(char *str, int i, int *loop1, int *loop2, int *loop3)
{
	char	c;
	int		j;

	c = str[i];
	j = i;
	if (c == '{')
		(*loop1)++;
	else if (c == '[')
		(*loop2)++;
	else if (c == '(')
		(*loop3)++;
	else if (c == '}')
	{
		while (--j >= 0)
		{
			if (str[j] == '{')
			{
				str[i] = 'a';
				str[j] = 'a';
				(*loop1)--;
				return (0);
			}
			else if (is_bracket(str[j]))
				return (1);
		}
		return (1);
	}
	else if (c == ']')
	{
		while (--j >= 0)
		{
			if (str[j] == '[')
			{
				str[i] = 'a';
				str[j] = 'a';
				(*loop2)--;
				return (0);
			}
			else if (is_bracket(str[j]))
				return (1);
		}
		return (1);
	}
	else if (c == ')')
	{
		while (--j >= 0)
		{
			if (str[j] == '(')
			{
				str[i] = 'a';
				str[j] = 'a';
				(*loop3)--;
				return (0);
			}
			else if (is_bracket(str[j]))
				return (1);
		}
		return (1);
	}
	return (0);
}

int		brackets(char *str)
{
	int		loop1;
	int		loop2;
	int		loop3;
	int		len;
	int		i;
	int		res;

	len = ft_strlen(str);
	i = -1;
	loop1 = 0;
	loop2 = 0;
	loop3 = 0;
	while (++i < len)
	{
		res = ft_addloop(str, i, &loop1, &loop2, &loop3);
		if (res)
		return (1);
	}
	if (loop1 || loop2 || loop3)
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while (++i < argc)
		{
			if (!brackets(argv[i]))
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
		}
	}
	return (0);
}
