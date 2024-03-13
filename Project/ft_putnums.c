/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:45:58 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/12 12:46:38 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(char *subs, unsigned int d, int base)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
	if (d >= 16)
	{
		flag = ft_puthex(subs, (d / base), base);
		if (flag == -1)
			return (-1);
		count += flag;
	}
	flag = ft_putchar(subs[(d % base)]);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}

int	ft_putnbr(char *subs, long d, int base)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
	if (d < 0)
	{
		d *= -1;
		flag = ft_putchar('-');
		if (flag == -1)
			return (-1);
		count += flag;
	}
	if (d >= 10)
	{
		flag = ft_putnbr(subs, (d / base), base);
		if (flag == -1)
			return (-1);
		count += flag;
	}
	flag = ft_putchar(subs[(d % base)]);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}

int	ft_putuintptr(char *subs, unsigned long d, int base)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
	if (d >= 16)
	{
		flag = ft_putuintptr(subs, (d / base), base);
		if (flag == -1)
			return (-1);
		count += flag;
	}
	flag = ft_putchar(subs[d % base]);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}

int	ft_putuint(char *subs, unsigned int d, int base)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
	if (d >= 10)
	{
		flag = ft_putuint(subs, (d / base), base);
		if (flag == -1)
			return (-1);
		count += flag;
	}
	flag = ft_putchar(subs[d % base]);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				flag;
	int				count;
	unsigned long	nbr;

	flag = 0;
	count = 0;
	nbr = (unsigned long)ptr;
	flag = write(1, "0x", 2);
	if (flag == -1)
		return (-1);
	count += flag;
	flag = ft_putuintptr("0123456789abcdef", nbr, 16);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}
