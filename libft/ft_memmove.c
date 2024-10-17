/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:28:00 by yozel             #+#    #+#             */
/*   Updated: 2024/10/17 17:45:12 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s;
	unsigned char		*d;
	size_t				i;
	int					sn;

	if (!dst && !src)
		return (NULL);
	i = 0;
	sn = 1;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst > src)
	{
		sn = -1;
		d += len - 1;
		s += len - 1;
	}
	while (i < len)
	{
		*d = *s;
		d += sn;
		s += sn;
		i++;
	}
	return (dst);
}
