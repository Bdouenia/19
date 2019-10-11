/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 00:14:48 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 02:30:23 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		fresh = ft_strnew(ft_strlen(s));
		if (fresh == NULL)
			return (NULL);
		while (s[i])
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
		return (fresh);
	}
	return (NULL);
}
