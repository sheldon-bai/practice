/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:27:54 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 16:32:52 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		main(void)
{
	printf("%s\n",strdup("asdf"));
	printf("%s\n",strdup(""));
	printf("%s\n",strdup("hello world!"));
	printf("%s\n",strdup("hello 42"));
	printf("%s\n",strdup("ll20C"));
	printf("%s\n",strdup("Yzjq8n6Ecrg6ZuuFh"));
	printf("%s\n",strdup("30kmOXZTEEMCf9qxBxBDgUyFaPXiNtYh0i4DaVRgm6lni"));
	printf("%s\n",strdup("oq3Ab0ct2m0ZYnahy3Pvl7f71Lla"));
	printf("%s\n",strdup("bai xudong"));
	printf("%s\n",strdup("   adfaj adf   ;aflj"));
	return (0);
}
