/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 22:10:31 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 22:16:05 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("afa", "asfads"));
	printf("%d\n", ft_strcmp("lnsg;", "hoifuagh"));
	printf("%d\n", ft_strcmp("bhvbai", "ouaygehfo"));
	printf("%d\n", ft_strcmp("vailhriu", "vanrli"));
	printf("%d\n", ft_strcmp("bnaliruh", "auyru"));
	printf("%d\n", ft_strcmp("hlads", "iuhaf"));
	printf("%d\n", ft_strcmp("nver;", "filrel"));
}
