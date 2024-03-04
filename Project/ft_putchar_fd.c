/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:43:19 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/04 10:42:31 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(size_t count, va_list params)
{
	char fc;

	fc = va_arg(params, int);
	if(write(FD, &fc, 1) == -1)
		return ;
	else
		count++;
}
