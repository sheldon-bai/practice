/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 17:40:23 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 18:14:00 by xbai             ###   ########.fr       */
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

int		main(int ac, char **av)
{
	int		len;
	int		i;
	int		end;
	int		start;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		if (len > 0)
		{
			i = len - 1;
			while ((av[1][i] == ' ' || av[1][i] == '\t') && i >= 0)
				i--;
			end = i;
			while ((av[1][i] != ' ' && av[1][i] != '\t') && i >= 0)
				i--;
			if (i == 0 && av[1][i] != ' ' && av[1][i] == '\t')
				start = i;
			else
				start = i + 1;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
