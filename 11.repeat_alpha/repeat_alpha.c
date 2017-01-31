/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 22:06:41 by xbai              #+#    #+#             */
/*   Updated: 2017/01/30 22:26:59 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		cnt;

	if (argc == 2)
	{
		while (*argv[1])
		{
			if ((*argv[1] >= 'a' && *argv[1] <= 'z') || (*argv[1] >= 'A' && *argv[1] <= 'Z'))
			{
				i = 0;
				if ((*argv[1] - 'a') >= 0)
					cnt = (*argv[1] - 'a');
				else
					cnt = (*argv[1] - 'A');
				while (i <= cnt)
				{
					write(1, argv[1], 1);
					i++;
				}
			}
			else
			{
				write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
