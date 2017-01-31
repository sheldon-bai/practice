/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 23:37:36 by xbai              #+#    #+#             */
/*   Updated: 2017/01/30 23:54:39 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	search_and_replace(char **argv)
{
	if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		while (*argv[1])
		{
			if (*argv[1] == *argv[2])
				*argv[1] = *argv[3];
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv);
	write(1, "\n", 1);
}
