/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 00:05:20 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/03 00:20:57 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		n;
	int		f;

	fresh = (char*)malloc(sizeof(char*) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (fresh == NULL)
		return (NULL);
	n = 0;
	f = 0;
	while (s1[n])
	{
		fresh[f] = s1[n];
		f++;
		n++;
	}
	n = 0;
	while (s2[n])
	{
		fresh[f] = s2[n];
		f++;
		n++;
	}
	fresh[f] = '\0';
	return (fresh);
}
