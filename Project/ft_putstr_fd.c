/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:11:42 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/04 11:21:59 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(size_t count, va_list params)
{
	char		c;
	size_t		ind;
	const char	*s;

	s = va_arg(params, char *);
	ind = 0;
	while (s[ind] != '\0')
	{
		c = s[ind];
		if(write(FD, &c, 1) == -1)
			return ;
		else
		{
			count++;
			ind++;
		}
	}
}
