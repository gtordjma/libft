/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtordjma <gtordjma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 11:37:38 by gtordjma          #+#    #+#             */
/*   Updated: 2014/11/10 14:34:30 by gtordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		l(int n, long int *res)
{
	int			len;
	long int	tmp;

	len = 0;
	*res = n;
	tmp = n;
	if (n < 0)
	{
		*res = *res * -1;
		tmp = -tmp;
		len = 1;
	}
	while (tmp / 10 != 0)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int			i;
	char		*ret;
	int			len;
	long int	res;

	len = l(n, &res);
	ret = (char *)malloc(sizeof(ret) * (len + 1));
	if (ret == NULL)
		return (NULL);
	i = (n < 0) ? 1 : 0;
	ret[0] = '-';
	while (len - i >= 0)
	{
		ret[i] = '0' + (res / ft_recursive_power(10, len - i));
		res = res % ft_recursive_power(10, len - i);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
