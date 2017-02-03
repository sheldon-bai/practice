/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 21:19:51 by xbai              #+#    #+#             */
/*   Updated: 2017/02/02 21:26:26 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(char *str)
{
	int		nb;
	int		div;

	nb = atoi(str);
	if (nb == 1)
		printf("1");
	if (nb <= 1)
		return ;
	div = 2;
	while (div <= nb)
	{
		if (nb % div == 0)
		{
			printf("%d", div);
			if (nb == div)
				return ;
			printf("*");
			nb = nb / div;
		}
		else
			div++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		fprime(av[1]);
	printf("\n");
	return (0);
}
