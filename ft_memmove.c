/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 00:24:00 by yuxu              #+#    #+#             */
/*   Updated: 2017/12/02 02:55:25 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	char		*src1;
	int			i;

	dst1 = (char*)dst;
	src1 = (char*)src;
	if (dst > src)
	{
		i = len;
		while (i--)
			dst1[i] = src1[i];
	}
	i = 0;
	while (len--)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}

int	main(int ac, char **av)
{
	printf("%s\n", memmove(av[1], av[2], atoi(av[3])));
	printf("%s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	return 0;
}
