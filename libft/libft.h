/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:29:38 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/13 16:59:14 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *str);
int		ft_checkbase(char *base);
int		ft_checkparam(const char *input, int i, int count, va_list (ap));
int		ft_hexpoint(unsigned long pnt);
int		ft_putlngnbr_base(unsigned long nbr, char *base);
int		ft_putunsnbr_base(unsigned int nbr, char *base);
int		ft_prsprint(int i, int count, const char *inp, va_list ap);
int		ft_putunsnbr(unsigned int n);

#endif