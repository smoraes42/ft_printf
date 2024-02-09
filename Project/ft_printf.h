/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:28:08 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/10 00:11:18 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
#// Extra mine printf utils
void	ft_put_ulong_fd(unsigned long n, int fd);
void	ft_put_uint_fd(unsigned int n, int fd);
void	ft_puthex_frmt_fd(unsigned long n, int fd);
void	ft_puthex_frmt_mayus_fd(unsigned long n, int fd);
void	ft_puthex_fd(unsigned long n, int fd);
void	ft_puthex_mayus_fd(unsigned long n, int fd); include "/Users/smoraes-/Templates/git/Libft/Project/libft.h"

#endif
