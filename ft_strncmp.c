/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:43:54 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/10 17:18:51 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] == '\0')
			if (((unsigned char *)s2)[i] == '\0')
				return (0);
		if (((unsigned char *)s2)[i] == '\0')
			if (((unsigned char *)s1)[i] == '\0')
				return (0);
		if (s1[i] != s2[i])
		{
			if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
				return (1);
			if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
				return (-1);
		}
		i++;
	}
	return (0);
}
