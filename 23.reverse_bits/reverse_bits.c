/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:34:32 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 19:37:01 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;

	i = 0;
	res = 0;
	while (i < 8)
	{
		res = res * 2 + octet % 2;
		octet /= 2;
		i++;
	}
	return (res);
}
