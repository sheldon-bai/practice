/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 21:39:07 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 21:56:32 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;

	res = 0;
	i = 0;
	while (i < 8)
	{
		res = res * 2 + octet % 2;
		octet /= 2;
		i++;
	}
	i = 0;
	while (i < 8)
	{
		if (res % 2)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		res /= 2;
		i++;
	}
}
