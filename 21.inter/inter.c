/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:54:22 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 17:38:13 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	char	table[30];
	int		found;
	int		cnt;
	int		i;

	if (ac == 3)
	{
		cnt = 0;
		while (*av[1])
		{
			found = 0;
			i = -1;
			while (++i < cnt)
			{
				if (*av[1] == table[i])
					found = 1;
			}
			if (found == 0)
			{
				i = 0;
				while (av[2][i])
				{
					if (*av[1] == av[2][i])
					{
						table[cnt++] = *av[1];
						write(1, av[1], 1);
						break;
					}
					else
						i++;
				}
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
