/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusufozel <yusufozel@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:41:28 by yusufozel         #+#    #+#             */
/*   Updated: 2024/10/12 17:48:21 by yusufozel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

    if (!haystack && !len)
        return (0);

    if (needle[0] == '\0' || needle == haystack)
		return ((char *)haystack);

	i = 0;
	while (haystack[i])
	{
        l = 0;
		while (haystack[i + l] == needle[l] && (i + l) < len)
        {
            if (haystack[i + l] == '\0' && needle[l] == '\0')
				return ((char *)(haystack + i));
            l++;
        }
        if (needle[l] == '\0')
            return ((char *)(haystack + i));
        i++;
	}

	return (0);
}