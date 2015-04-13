/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:53:13 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/10 15:06:24 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] || s2[i])
	{
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
