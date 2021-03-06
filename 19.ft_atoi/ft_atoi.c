/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:30:48 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 16:07:39 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		res;
	int		neg;

	res = 0;
	neg = 1;
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
	while (*str && *str >= '0' && *str <= '9')
	{
		res = (res) * 10 + (*str - '0');
		str++;
	}
	return (res * neg);
}
