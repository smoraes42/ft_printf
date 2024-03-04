/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:02:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/04 10:49:18 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(size_t count, va_list params)
{
	int n;

	n = va_arg(params, int);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", FD);
	}
	else
	{
		if (n < 0)
		{
			if (write(FD, "-", 1) == -1)
				return ;
			else
				n *= (-1);
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, FD);
		ft_putchar_fd(((n % 10) + '0'), FD);
	}
}
