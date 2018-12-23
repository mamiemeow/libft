/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 21:48:49 by kkuvalis          #+#    #+#             */
/*   Updated: 2018/12/22 18:54:21 by kkuvalis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (size + 1 == 0)
		return (0);
	if (!(str = malloc(size + 1)))
		return (0);
	ft_memset(str, '\0', size + 1);
	return (str);
}
