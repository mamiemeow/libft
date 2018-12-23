/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 02:22:32 by kkuvalis          #+#    #+#             */
/*   Updated: 2018/11/30 04:15:05 by kkuvalis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*new;

	new = (char*)s;
	i = (int)ft_strlen(s) + 1;
	while (i--)
	{
		if (new[i] == (char)c)
		{
			return (new + i);
		}
	}
	return (NULL);
}
