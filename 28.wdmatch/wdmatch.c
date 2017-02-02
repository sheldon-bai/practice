/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 21:01:13 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 21:16:32 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int ac, char **av)
{
	char	*str1;
	char	*str2;
	int		i;
	int		can;

	if (ac == 3)
	{
		str1 = av[1];
		str2 = av[2];
		i = 0;
		can = 1;
		while (str1[i])
		{
			while (*str2 && *str2 != str1[i])
				str2++;
			if (*str2 == str1[i])
			{
				i++;
				str2++;
			}
			else
			{
				can = 0;
				break ;
			}
		}
		if (can)
			ft_putstr(str1);
	}
	write(1, "\n", 1);
	return (0);
}
