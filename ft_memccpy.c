/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:40:06 by kkuvalis          #+#    #+#             */
/*   Updated: 2018/11/29 19:19:53 by kkuvalis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *ddst;
	unsigned char *dsrc;

	ddst = (unsigned char *)dst;
	dsrc = (unsigned char *)src;
	while (n--)
	{
		*ddst = *dsrc;
		if (*dsrc == (unsigned char)c)
			return (ddst + 1);
		ddst++;
		dsrc++;
	}
	return (0);
}
