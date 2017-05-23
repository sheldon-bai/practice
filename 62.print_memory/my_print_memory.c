#include <unistd.h>

static void	ft_printnumber(char c)
{
	char	upper;
	char	lower;
	char	u;
	char	l;

	upper = (0xf0 & c) / 16;
	lower = 0x0f & c;
	u = "0123456789abcdef"[(int)upper];
	l = "0123456789abcdef"[(int)lower];
	write(1, &u, 1);
	write(1, &l, 1);
}

static void	ft_printchar(char *ptr, int i)
{
	int		j;

	j = -1;
	while (++j < 16)
	{
		if (ptr[i + j - 15] > 31 && ptr[i + j - 15] < 127)
			write(1, (ptr + i + j - 15), 1);
		else
			write(1, ".", 1);
	}
	write(1, "\n", 1);
}

static void	ft_printspace(int emptynbr)
{
	int		i;

	i = -1;
	while (++i < (emptynbr * 2 + (emptynbr + 1) / 2))
		write(1, " ", 1);
}

static void	ft_printlastchar(char *ptr, int start, int end)
{
	int		i;

	i = start;
	while (i < end)
	{
		if (ptr[i] > 31 && ptr[i] < 127)
			write(1, (ptr + i), 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	print_memory(const void *addr, size_t size)
{
	int		i;
	char	*ptr;
	int		emptynbr;

	ptr = (char*)addr;
	i = -1;
	while (++i < (int)size)
	{
		ft_printnumber(ptr[i]);
		if (i % 2)
			write(1, " ", 1);
		if ((i + 1) % 16 == 0)
			ft_printchar(ptr, i);
	}
	emptynbr = (((int)size / 16 + 1) * 16 - (int)size);
	ft_printspace(emptynbr);
	ft_printlastchar(ptr, ((int)size / 16 * 16), i);
}
