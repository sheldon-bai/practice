/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 22:31:45 by xbai              #+#    #+#             */
/*   Updated: 2017/01/30 22:44:06 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int		len;
	int		i;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		i = len - 1;
		while (i >= 0)
		{
			write(1, &argv[1][i--], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
