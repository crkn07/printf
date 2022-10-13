/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkparam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:25:55 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/13 17:10:24 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkparam(const char *input, int i, int count, va_list (ap))
{
	if (input[i + 1] == '%')
		count += write(1, "%", 1);
	if (input[i + 1] == 'c')
		count += ft_putchar(va_arg(ap, int));
	if (input[i + 1] == 's')
		count += ft_putstr(va_arg(ap, char *));
	if (input[i + 1] == 'p')
		count += ft_hexpoint(va_arg(ap, size_t));
	if (input[i + 1] == 'i')
		count += ft_putnbr(va_arg(ap, int));
	if (input[i + 1] == 'u')
		count += ft_putunsnbr_base(va_arg(ap, int), "0123456789abcdef");
	if (input[i + 1] == 'x')
		count += ft_putunsnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	return (count);
}
