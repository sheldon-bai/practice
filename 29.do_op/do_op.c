/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 21:24:08 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 21:35:43 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		do_op(int a, char *op, int b)
{
	if (*op == '+')
		return (a + b);
	else if (*op == '-')
		return (a - b);
	else if (*op == '*')
		return (a * b);
	else if (*op == '/')
		return (a / b);
	else if (*op == '%')
		return (a % b);
	else
		return (0);
}

int		main(int ac, char **av)
{
	int		a;
	int		b;
	int		res;

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		res = do_op(a, av[2], b);
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
