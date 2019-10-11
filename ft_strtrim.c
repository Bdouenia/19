/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 01:18:07 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 02:16:05 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i[2];
	char	*r;

	if (s == NULL)
		return (NULL);
	i[0] = 0;
	if (!(r = ft_memalloc(ft_strlen(s))))
		return (NULL);
	ft_memcpy(r, s, ft_strlen(s));
	while (r[i[0]] && (r[i[0]] == ' ' || r[i[0]] == '\n' || r[i[0]] == '\t'))
		i[0]++;
	i[1] = ft_strlen(s) - 1;
	while (i[1] > 0)
	{
		if (r[i[1]] == ' ' || r[i[1]] == '\n' || r[i[1]] == '\t')
			i[1]--;
		else
		{
			r[i[1] + 1] = '\0';
			break ;
		}
	}
	return (ft_strdup(&r[i[0]]));
}
