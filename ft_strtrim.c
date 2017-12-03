/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 00:21:36 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/03 04:52:15 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		sep(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (0);
	return (1);
}

int		lenlen(char *s)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(s) - 1;
	while (sep(s[i]) == 0 && s[i])
		i++;
	while (sep(s[l]) == 0 && s[l])
		l--;
	return (l - i + 1);
}

char	*ft_strtrim(char const *s)
{
	char	*copy;
	char	*result;
	int		i;
	int		n;

	copy = (char*)s;
	i = 0;
	if (!(result = (char*)malloc(sizeof(char*) * (lenlen(copy) + 1))))
		return (NULL);
	while (sep(copy[i]) == 0 && copy[i])
		i++;
	if (lenlen(copy) == 0)
		return ("");
	n = 0;
	while (n < lenlen(copy))
	{
		result[n] = copy[i];
		i++;
		n++;
	}
	result[n] = '\0';
	return (result);
}
