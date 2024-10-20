/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:14:14 by yozel             #+#    #+#             */
/*   Updated: 2024/10/19 17:01:52 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	dl;
	size_t	sl;
	int		i;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	l = dl;
	i = 0;
	if (dstsize <= dl)
		return (dstsize + sl);
	while ((l < dstsize - 1) && src[i])
	{
		dst[l] = src[i];
		l++;
		i++;
	}
	dst[l] = '\0';
	return (dl + sl);
}
