/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:06:01 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/23 19:17:59 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	i;
	void	*c;

	c = (void *)malloc(size);
	i = 0;
	if (!c)
		return (NULL);
	while (i <= size)
	{
		((char *)c)[i] = '\0';
		i++;
	}
	return (c);
}
