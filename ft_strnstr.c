/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <bdouenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 00:56:43 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 23:51:05 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(needle);
	if (!len)
		return ((char*)haystack);
	while (*haystack && i < n)
	{
		if (!ft_strncmp(haystack, needle, len))
		{
			if (len + i > n)
				return (NULL);
			return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (0);
}
