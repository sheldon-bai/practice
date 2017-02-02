/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:44:21 by xbai              #+#    #+#             */
/*   Updated: 2017/02/01 16:08:24 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);

int		main(void)
{
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("15"));
	printf("%d\n", ft_atoi("-25"));
	printf("%d\n", ft_atoi("12345"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("   -00006738"));
	printf("%d\n", ft_atoi("+00008762384"));
	printf("%d\n", ft_atoi("12211t11"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", atoi("2147483648"));
	return (0);
}
