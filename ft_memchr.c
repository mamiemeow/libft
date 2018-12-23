/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:42:22 by kkuvalis          #+#    #+#             */
/*   Updated: 2018/11/29 20:19:38 by kkuvalis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*new;

	i = 0;
	new = (unsigned char *)s;
	while (n--)
	{
		if (new[i] == (unsigned char)c)
			return (new + i);
		i++;
	}
	return (0);
}
