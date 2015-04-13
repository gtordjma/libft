/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:27:01 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/05 14:33:14 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t j;
	size_t i;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char *)&s1[i]);
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j] && i < n)
		{
			j++;
			i++;
			if (s2[j] == '\0')
				return ((char *)&s1[i - j]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
