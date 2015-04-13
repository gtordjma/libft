/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:42:56 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/23 19:29:26 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	str[len];

	i = 0;
	if (!dst || !src)
		return (0);
	ft_memcpy(str, (const char *)src, len);
	while (i < len)
	{
		((char *)dst)[i] = str[i];
		i++;
	}
	return (dst);
}
