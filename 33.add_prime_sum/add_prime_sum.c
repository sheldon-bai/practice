/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 23:02:12 by xbai              #+#    #+#             */
/*   Updated: 2017/02/02 00:23:16 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (lnb < 10)
		ft_putchar(lnb + '0');
	else
	{
		ft_putnbr(lnb / 10);
		ft_putchar(lnb % 10 + '0');
	}
}

int		ft_atoi(char *str)
{
	int		res;
	int		neg;

	neg = 1;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '0')
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str == '0')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * neg);
}

int		is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		prime_sum(int nb)
{
	int		sum;
	int		i;

	i = 0;
	sum = 0;
	while (i <= nb)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

int		main(int ac, char **av)
{
	int		nb;
	int		res;

	res = 0;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		if (nb == 2)
			res = 2;
		else if (nb > 2)
			res = prime_sum(nb);
		else
			res = 0;
	}
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
