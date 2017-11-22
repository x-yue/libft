/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:13:59 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/22 22:07:32 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str);

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	n = 0;
	while (n < ft_strlen(haystack) - ft_strlen(needle) && n < len)
	{
		i = 0;
		while (haystack[n + i] && needle[i] == haystack[n + i])
		{
			if (needle[i + 1] == '\0')
				return ((char*)haystack + n);
			i++;
		}
		n++;
		len--;
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	printf("%s\n", strnstr(av[1], av[2], ft_atoi(av[3])));
	printf("%s\n", ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	return (0);
}
