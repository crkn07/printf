/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:19:36 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/11 13:22:07 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	unsigned int	cont;

	cont = 0;
	if (n > -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			cont += ft_putstr("-2");
			cont += ft_putnbr(147483648);
		}
		else if (n >= 10)
		{
			cont += ft_putnbr(n / 10);
			cont += ft_putnbr(n % 10);
		}
		else if (n < 0)
		{
			n = -n;
			cont += ft_putchar('-');
			cont += ft_putnbr(n);
		}
		else
			cont += ft_putchar(n + '0');
	}
	return (cont);
}