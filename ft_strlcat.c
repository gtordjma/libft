/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:55:45 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/13 15:37:54 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		lend;
	size_t		lens;
	int			max;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	i = 0;
	max = (size - ft_strlen(dst) - 1);
	if (max < 0)
		return (size + lens);
	while (i < lens && i < (size_t)max)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
