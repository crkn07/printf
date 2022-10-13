/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:10:57 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/13 13:14:24 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * It prints a pointer in hexadecimal format
 * 
 * @param pnt the pointer to print
 * 
 * @return The number of characters printed.
 */

int	ft_hexpoint(unsigned long pnt)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (pnt != 0)
		count += ft_putlngnbr_base(pnt, "0123456789abcdef");
	else
		count += write (1, "0", 1);
	return (count);
}
