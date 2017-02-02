/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:27:54 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 16:35:08 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *str);

int		main(void)
{
	printf("%s\n",ft_strdup("asdf"));
	printf("%s\n",ft_strdup(""));
	printf("%s\n",ft_strdup("hello world!"));
	printf("%s\n",ft_strdup("hello 42"));
	printf("%s\n",ft_strdup("ll20C"));
	printf("%s\n",ft_strdup("Yzjq8n6Ecrg6ZuuFh"));
	printf("%s\n",ft_strdup("30kmOXZTEEMCf9qxBxBDgUyFaPXiNtYh0i4DaVRgm6lni"));
	printf("%s\n",ft_strdup("oq3Ab0ct2m0ZYnahy3Pvl7f71Lla"));
	printf("%s\n",ft_strdup("bai xudong"));
	printf("%s\n",ft_strdup("   adfaj adf   ;aflj"));
	return (0);
}
