#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	unsigned int	nbr;
	int				sign;
	int				size;
	char			*abc = "0123456789ABCDEF";
	unsigned int	tmp;
	char			*res;

	if (base < 2 || base > 16)
		return (NULL);
	if (value < 0)
		nbr = -value;
	else
		nbr = value;
	if (value < 0 && base == 10)
	{
		sign = -1;
		size = 2;
	}
	else
	{
		sign = 1;
		size = 1;
	}
	tmp = nbr;
	while (tmp /= base)
		size++;
	res = (char*)malloc(sizeof(char) * (size + 1));
	res[size--] = '\0';
	res[size--] = abc[nbr % base];
	nbr /= base;
	while (nbr)
	{
		res[size] = abc[nbr % base];
		nbr /= base;
		size--;
	}
	if (sign == -1)
		res[size] = '-';
	return (res);
}
