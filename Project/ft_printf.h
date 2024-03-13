/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:58:21 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/12 12:46:38 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_putptr(void *ptr);
int	ft_putnbr(char *subs, long d, int base);
int	ft_putuint(char *subs, unsigned int d, int base);
int	ft_putuintptr(char *subs, unsigned long d, int base);
int	ft_putchar(int ch);
int	ft_putstr(char *str);
int	ft_puthex(char *subs, unsigned int d, int base);
int	formatspec(const char *format, va_list params);

#endif
