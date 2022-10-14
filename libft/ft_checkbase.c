/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:38:36 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/14 11:42:25 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It checks if the base is valid
 * 
 * @param base the string containing the base characters.
 * 
 * @return The number of characters in the string.
 */
int	ft_checkbase(char *base)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		b = i + 1;
		if (base[i] == '+' || base [i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[b])
		{
			if (base[i] == base[b])
				return (0);
			b++;
		}
		i++;
	}
	return (1);
}
