/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 19:06:35 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/28 22:00:04 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	int				i;

	dst1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	i = 0;
	if (n < 0 && )
		
	if (n > 0)
	{
		while (src1[i] && n--)
		{
			i++;
			if (src1[i] == (unsigned char)c)
				return (dst1 + i + 1);
		}
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	printf("%s\n", memccpy((char*)av[1], (char*)av[2],(char)av[3][0], atoi(av[4])));
	printf("%s\n",ft_memccpy((char*)av[1], (char*)av[2],(char)av[3][0], atoi(av[4])));
	return 0;
}
