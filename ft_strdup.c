/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <bdouenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:06:12 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 01:55:32 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		a;
	char	*str;

	a = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	ft_memcpy(str, src, a + 1);
	return (str);
}
