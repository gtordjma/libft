/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:44:07 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/10 15:00:29 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i != n)
	{
		dst[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			while (i != n)
			{
				dst[i] = '\0';
				i++;
			}
		}
	}
	return (dst);
}
