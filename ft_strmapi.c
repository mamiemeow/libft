/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 01:15:08 by kkuvalis          #+#    #+#             */
/*   Updated: 2018/12/04 02:36:24 by kkuvalis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		new = (char *)malloc(sizeof(char const) * ft_strlen(s) + 1);
		if (new)
		{
			while (i < (unsigned int)ft_strlen(s))
			{
				new[i] = f(i, (char)s[i]);
				i++;
			}
			new[i] = '\0';
			return (new);
		}
		return (0);
	}
	else
		return (0);
}
