/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:10:45 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/07 16:13:18 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			(*f)(&s[i]);
			++i;
		}
	}
}