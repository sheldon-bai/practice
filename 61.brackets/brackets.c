#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_loopcalc(char curchar, int *loop1, int *loop2, int *loop3)
{
	if (curchar == ')')
			(*loop1)++;
		else if (curchar == '(')
			(*loop1)--;
		else if (curchar == ']')
			(*loop2)++;
		else if (curchar == '[')
			(*loop2)--;
		else if (curchar == '}')
			(*loop3)++;
		else if (curchar == '{')
			(*loop3)--;
}

int		ft_iskuohao(char c)
{
	if (c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}')
		return (1);
	else
		return (0);
}

int		ft_brackets(char *str)
{
	int		len;
	int		i;
	int		loop1;
	int		loop2;
	int		loop3;
	char	curchar;
	int		j;

	len = ft_strlen(str);
	if (len < 1)
		return (1);
	if (len == 1 && ft_iskuohao(str[0]))
		return (0);
	i = -1;
	while (++i < len)
	{
		curchar = str[i];
		loop1 = 0;
		loop2 = 0;
		loop3 = 0;
		ft_loopcalc(str[i], &loop1, &loop2, &loop3);
		if (loop1 || loop2 || loop3)
			str[i] = 'd';
		j = i;
		while (loop1 > 0)
		{
			if (--j < 0)
				return (0);
			ft_loopcalc(str[j], &loop1, &loop2, &loop3);
			if (str[j] == '(')
			{
				if (loop1 == 0 && loop2 == 0 && loop3 == 0)
					str[j] = 'a';
			}
		}
		while (loop1 < 0)
		{
			if (++j == len)
				return (0);
			ft_loopcalc(str[j], &loop1, &loop2, &loop3);
			if (str[j] == ')')
			{
				if (loop1 == 0 && loop2 == 0 && loop3 == 0)
					str[j] = 'a';
			}
		}
		while (loop2 > 0)
		{
			if (--j < 0)
				return (0);
			ft_loopcalc(str[j], &loop1, &loop2, &loop3);
			if (str[j] == '[')
			{

				if (loop1 == 0 && loop2 == 0 && loop3 == 0)
					str[j] = 'b';
			}
		}
		while (loop2 < 0)
		{
			if (++j == len)
				return (0);
			ft_loopcalc(str[j], &loop1, &loop2, &loop3);
			if (str[j] == ']')
			{
				if (loop1 == 0 && loop2 == 0 && loop3 == 0)
					str[j] = 'b';
			}
		}
		while (loop3 > 0)
		{
			if (--j < 0)
				return (0);
			ft_loopcalc(str[j], &loop1, &loop2, &loop3);
			if (str[j] == '{')
			{
				if (loop1 == 0 && loop2 == 0 && loop3 == 0)
					str[j] = 'c';
			}
		}
		while (loop3 < 0)
		{
			if (++j == len)
				return (0);
			ft_loopcalc(str[j], &loop1, &loop2, &loop3);
			if (str[j] == '}')
			{
				if (loop1 == 0 && loop2 == 0 && loop3 == 0)
					str[j] = 'c';
			}
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		ret;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			ret = ft_brackets(argv[i]);
			if (ret)
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
