/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 18:44:53 by kkuvalis          #+#    #+#             */
/*   Updated: 2018/11/30 19:02:36 by kkuvalis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int slen;
	int len;

	len = 0;
	slen = ft_strlen(src);
	while (*dst && size)
	{
		dst++;
		len++;
		size--;
	}
	while (*src && size-- > 1)
	{
		*dst++ = *src++;
		if (*src == 0 || size == 1)
			*dst = '\0';
	}
	return (len + slen);
}
