/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:19:13 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/04 11:34:45 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	formatspec(const char *format, size_t *count, va_list params);

int	ft_printf(const char *strng, ...)
{
	size_t	i;
	size_t	count;
	size_t	lstrprnt;
	va_list	params;

	i = 0;
	count = 0;
	lstrprnt = ft_strlen(strng);
	va_start(params, strng);
	while (i < lstrprnt)
	{
		while (strng[i] != '%' && strng[i] != '\0')
		{
			if ((write(1, &strng[++i], 1)) == -1)
				return (0);
			else
				count++;
		}
		if (strng[i] == '%')
		{
			i++;
			formatspec(&strng[i], &count, params);
		}
	}
	return (count);
}



void formatspec(const char *format,  size_t *count, va_list params)
{
	if (*format == 'c')
		ft_putchar_fd(*count, params);
	else if ( *format == 's')
		ft_putstr_fd(*count, params);
	else if (*format == 'p')
		ft_puthex_fd(*count, params);
	else if (*format == 'd')
		ft_putnbr_fd(*count, params);
	else if ( *format == 'i')
		;
	else if ( *format == 'u')
		;
	else if ( *format == 'x')
		;
	else if ( *format == 'X')
		;
	else if ( *format == '%')
		;
}

