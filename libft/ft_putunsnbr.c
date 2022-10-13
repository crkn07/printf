/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:06:52 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/13 13:10:37 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It prints an unsigned integer
 * 
 * @param n The number to be printed.
 * 
 * @return The number of characters printed.
 */
int	ft_putunsnbr(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n >= 0 || n <= 2147483647)
	{
		if (n >= 10)
		{
			count += ft_putnbr(n / 10);
			count += ft_putnbr(n % 10);
		}
		else
			count += ft_putchar(n + '0');
	}
	return (count);
}
