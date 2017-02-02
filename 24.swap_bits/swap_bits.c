/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:45:21 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 19:56:35 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	low;
	unsigned char	high;
	
	low = 0;
	high = 0;
	low = octet & 0x0F;
	high = octet & 0xF0;
	low <<= 4;
	high >>= 4;
	return (low + high);
}
