/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefulfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:00:31 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 15:03:49 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int		main(void)
{
	int		imin;
	int		imax;

	imin = INT_MIN;
	imax = INT_MAX;
	printf("min is %d, max is %d\n", imin, imax);
	return (0);
}
