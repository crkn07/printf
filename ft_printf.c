/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:47:54 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/14 11:42:31 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The function ft_printf() takes a string and a variable number of arguments, 
 * and returns the number of characters printed
 * @param inp The string to be printed.
 * 
 * @return The number of characters printed.
 */
int	ft_printf(char const *inp, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, inp);
	count += ft_prsprint(i, count, inp, ap);
	va_end(ap);
	return (count);
}
