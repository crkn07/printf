/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_uns.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:12:49 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/14 11:32:38 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It prints an unsigned int in a given base
 * 
 * @param nbr the number to be printed
 * @param base the base to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_putnbr_base_uns(unsigned int nbr, char *base)
{
	int	nbr_final[100];
	int	prnt[3];

	prnt[0] = 0;
	prnt[1] = 0;
	prnt[2] = 0;
	if (ft_checkbase(base))
	{
		if (nbr == 0)
			prnt[2] += ft_putchar('0');
		while (base[prnt[1]])
			prnt[1]++;
		while (nbr)
		{
			nbr_final[prnt[0]] = nbr % prnt[1];
			nbr = nbr / prnt[1];
			prnt[0]++;
		}
		while (--prnt[0] >= 0)
			prnt[2] += ft_putchar(base[nbr_final[prnt[0]]]);
	}
	return (prnt[2]);
}
