/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:08:42 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/25 19:13:59 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;
	int		n;

	i = 0;
	n = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		while(s[i] == c && n < i)
		{
			while (n < i)
			{
				s2[n] = s[n];
				n++;
			}
			return (s2);
		}
	}
	return (NULL);
}


int		main(int ac, char **av)
{
	printf("%s\n", strchr(av[1], (av[2][0])));
	printf("%s\n", ft_strchr(av[1], (av[2][0])));
	return 0;
}

