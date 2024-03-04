/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:28:08 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/04 11:19:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# define FD 1
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar_fd(size_t count, va_list params);
void	ft_putnbr_fd(size_t count, va_list params);
void	ft_putstr_fd(size_t count, va_list params);

size_t	ft_strlen(const char *s);
void	ft_put_ulong_fd(unsigned long n, int fd);
void	ft_put_uint_fd(unsigned int n, int fd);
void	ft_puthex_frmt_fd(unsigned long n, int fd);
void	ft_puthex_frmt_mayus_fd(unsigned long n, int fd);
void	ft_puthex_fd(unsigned long n, int fd);
void	ft_puthex_mayus_fd(unsigned long n, int fd);

#endif
