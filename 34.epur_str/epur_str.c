/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:17:02 by xbai              #+#    #+#             */
/*   Updated: 2017/02/02 15:52:05 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;
	int		len;
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			len++;
		i++;
	}
	return (len);
}

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
	int		len;
	int		i;
	char	*str;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		if (len > 0)
		{
			i = 0;
			str = av[1];
			while (*str)
			{
				while (*str == ' ' || *str == '\t')
					str++;
				while (*str && *str != ' ' && *str != '\t')
				{
					av[1][i] = *str;
					i++;
					str++;
				}
				if (*str == ' ' || *str == '\t')
				{
					av[1][i] = ' ';
					i++;
				}
				else
					av[1][i] = '\0';
			}
			if (av[1][i - 1] == ' ' || av[1][i - 1] == '\t')
				av[1][i - 1] = '\0';
			ft_putstr(av[1]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
