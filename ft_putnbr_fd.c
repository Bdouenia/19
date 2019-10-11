/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdouenia <bdouenia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 01:49:43 by bdouenia          #+#    #+#             */
/*   Updated: 2017/11/15 01:54:13 by bdouenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long res;

	res = (long)n;
	if (res < 0)
	{
		ft_putchar_fd('-', fd);
		res = -res;
	}
	if (res >= 10)
	{
		ft_putnbr_fd((res / 10), fd);
	}
	ft_putchar_fd((res % 10 + '0'), fd);
}
