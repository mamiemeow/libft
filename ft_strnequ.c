/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 02:43:28 by kkuvalis          #+#    #+#             */
/*   Updated: 2018/12/19 14:33:40 by kkuvalis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		if (n == 0)
			return (1);
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
