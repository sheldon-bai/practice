/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:59:00 by xbai              #+#    #+#             */
/*   Updated: 2017/01/31 01:04:39 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		tmp;

	if (a && b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int		main(void)
{
	int		a;
	int		b;

	a = 5;
	b = 9;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}
