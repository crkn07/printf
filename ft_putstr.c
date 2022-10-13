/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:08:12 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/11 18:28:08 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	while (i < len)
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}