/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 17:17:10 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/26 17:27:08 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (s)
	{
		ret = (char *)malloc(sizeof(ret) * (len + 1));
		if (ret == NULL)
			return (NULL);
		while (s[start + i] && i < len)
		{
			ret[i] = s[start + i];
			i++;
		}
		return (ret);
	}
	else
		return (NULL);
}
