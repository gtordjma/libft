/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:13:40 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/13 13:42:00 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	nn;
	size_t			i;

	if (!dst || !src || !n)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	nn = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == nn)
		{
			i++;
			return (&(d[i]));
		}
		i++;
	}
	return (NULL);
}
