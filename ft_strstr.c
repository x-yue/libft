/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:26:56 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/20 20:12:22 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		n;

	n = 0;
	while (haystack[n])
	{
		i = 0;
		while (needle[i] == haystack[n + i])
		{
			if (needle[i + 1] == '\0')
			{
				return ((char*)haystack + n);
			}
			i++;
		}
		n++;
	}
	return (0);
}
