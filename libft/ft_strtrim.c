/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozel <yozel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:10:45 by yozel             #+#    #+#             */
/*   Updated: 2024/10/20 12:31:02 by yozel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	size_t	set_len;
	char*	new;

	i = 0;
	l = ft_strlen(s1) - 1;
	set_len = ft_strlen(set);
	while (ft_strncmp(s1 + set_len, set, set_len))
		i += set_len;
	while (ft_strncmp(s1 - set_len, set, set_len))
		l -= set_len;
	
	new = malloc(l - i + 1);
	ft_strlcpy(new, ((char *)s1) + i, l - i + 1);
	return new;
}
