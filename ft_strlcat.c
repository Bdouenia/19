/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 01:55:41 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 01:53:43 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	ret;
	size_t	i;

	i = ft_strlen(dest);
	ret = i + ft_strlen(src);
	if (i >= n)
		return (ret - i + n);
	--n;
	while (*src && i != n)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (ret);
}
