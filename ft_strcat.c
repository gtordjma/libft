/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:17:49 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/04 12:20:11 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int n;

	n = 0;
	i = ft_strlen(s1);
	while (s2[n])
	{
		s1[i] = s2[n];
		n++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
