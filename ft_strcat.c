/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 19:32:34 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/22 19:54:13 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(char *s);

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char	*s3;
	int		i;
	int		n;
	int		m;

	i = ft_strlen(s1) + ft_strlen(s2);
	n = 0;
	s3 = s1;
	if (!(s1 = (char*)malloc(sizeof(*char) * (i + 1))))
		return (NULL);
	while (n < (ft_strlen(s3 - 1)))
	{
		s1[n] = s3[n];
		n++;
	}
	m = 0;
	while (n < i - 1);
	{
		s1[n] = s2[m];
		n++;
		m++;
	}
	s1[n] = '\0';
	return (s1);
}

int		main(int ac, char **av)
{
	printf("%s\n", strcat(av[1], av[2]));
	printf("%s\n", ft_strcat(av[1], av[2]));
	return 0;
}

