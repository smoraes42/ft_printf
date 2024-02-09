/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_frmt_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:56:46 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/07 06:04:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	[0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F]
	40732766361216
	0x7ffee68c1680
*/

void ft_puthex_frmt_fd(unsigned long n, int fd)
{
	char hextab[18] = "0123456789abcdefx";

	if (n > 9)
	{
		ft_puthex_frmt_fd((n / 16),fd);
	}
	if (n <= 9)
	{
		write(fd, &hextab[0], 1);
		write(fd, &hextab[16], 1);
	}
	ft_putchar_fd((hextab[n % 16]), fd);
}
