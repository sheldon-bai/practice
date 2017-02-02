/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:37:14 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 19:41:26 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet);

int		main(void)
{
	unsigned char	o1;

	o1 = 0;
	while (o1 < 255)
	{
		printf("%d\n", reverse_bits(o1));
		o1++;
	}
	return (0);
}
