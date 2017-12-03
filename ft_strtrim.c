/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 00:21:36 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/03 22:35:32 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		separator(char c)
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
	while (separator(s[i]) == 0 && s[i])
		i++;
	while (separator(s[l]) == 0 && s[l] && i < l)
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
	if (lenlen(copy) == 0)
		return (ft_strdup(""));
	if (!(result = (char*)malloc(sizeof(char*) * (lenlen(copy) + 1))))
		return (NULL);
	while (separator(copy[i]) == 0 && copy[i])
		i++;
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
