/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:56:52 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/07 12:46:53 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int n;

	i = ft_strlen(s);
	n = 0;
	while (n != (i + 1))
	{
		if (s[n] == (char)c)
			return ((char *)&s[n]);
		if (s[n] != (char)c)
			n++;
	}
	return (NULL);
}
