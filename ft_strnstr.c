/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:13:59 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/20 20:56:17 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_atoi(const char *str);

int		ft_strlen(const char *s);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int n;

	n = 0;
	if (len > (ft_strlen(needle) - 1))
	{
		while (haystack [n])
		{
			i = 0;
			while (needle[i] == haystack[n + i])
			{
				if (needle[i + 1] == '\0')
					return ((char*)haystack + n);
				i++;
			}
			n++;
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	printf("%s\n", strnstr(av[1], av[2], ft_atoi(av[3])));
	printf("%s\n", ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	return (0);
}
