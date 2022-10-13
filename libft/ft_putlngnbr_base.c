/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlngnbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:19:02 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/13 17:02:08 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a number and a base, and prints the number in the base
 * 
 * @param nbr the number to be printed
 * @param base the base you want to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_putlngnbr_base(unsigned long nbr, char *base)
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
