/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 20:28:49 by xbai              #+#    #+#             */
/*   Updated: 2017/02/02 20:37:47 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		pgcd(int a, int b)
{
	if (b == 0)
		return (a);
	else if (a == 0)
		return (b);
	else
	{
		if (a > b)
			return pgcd(b, a % b);
		else
			return pgcd(a, b % a);
	}
}

int		main(int ac, char **av)
{
	int		a;
	int		b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		printf("%d", pgcd(a, b));
	}
	printf("\n");
}
