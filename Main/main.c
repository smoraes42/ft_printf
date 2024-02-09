/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 00:05:42 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/02 01:08:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char			c = 'c';
	char			s[5] = "test";
	int				x = -5;
	unsigned int	y = 5;
	int				numInHex = 500;
	int				numInHexMayus = 500;

	printf("%c\n %s\n %p\n %d\n %i\n %u\n %x\n %X\n %%\n",
			c,    s,   &s,  x,   x,   y,  numInHex, numInHexMayus);

	write(1, *c, 10);
}
