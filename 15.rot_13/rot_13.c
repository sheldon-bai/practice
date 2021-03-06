/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:24:44 by xbai              #+#    #+#             */
/*   Updated: 2017/01/31 00:34:47 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if ((*argv[1] >= 'a' && *argv[1] <= 'm') || (*argv[1] >= 'A' && *argv[1] <= 'M'))
				*argv[1] += 13;
			else if ((*argv[1] >= 'n' && *argv[1] <= 'z') || (*argv[1] >= 'N' && *argv[1] <= 'Z'))
				*argv[1] -= 13;
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
