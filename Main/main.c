/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:14:27 by smoraes-          #+#    #+#             */
/*   Updated: 2024/03/12 12:32:05 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	int count = 0;
	int count2 = 0;
	count += ft_printf("test\n");
	count2 += printf("test\n");

	count += ft_printf("%%%%%%\n");
	count2 += printf("%%%%%%\n");

	count += ft_printf("%c %c    %c\n", '1', 'a', 'b');
	count2 += printf("%c %c    %c\n", '1', 'a', 'b');
	
	count += ft_printf("%d %d %d    %d %d\n",10, '1', 'a', 'b', -1111);
	count2 += printf("%d %d %d    %d %d\n",10, '1', 'a', 'b', -1111);

	count += ft_printf("%i %i    %i\n", '1', 'a', 'b');
	count2 += printf("%i %i    %i\n", '1', 'a', 'b');


	count	+= ft_printf("%x %x    %x %x %x\n", '1', 'a', 'b',101209, -1945794706);
	count2	+=	  printf("%x %x    %x %x %x\n", '1', 'a', 'b',101209, -1945794706);

	count	+= ft_printf("%X %X    %X %X %X\n", '1', 'a', 'b',101209, -940314236);
	count2	+=	  printf("%X %X    %X %X %X\n", '1', 'a', 'b',101209, -940314236);

	count += ft_printf("%s %s %s",NULL,"\n","teeeeeeeeeeeeesttststststst\n");
	count2 += printf("%s %s %s",NULL,"\n","teeeeeeeeeeeeesttststststst\n");

	count	+= ft_printf(" %p %p\n", (void *)0, (void *)ULONG_MAX);
	count2	+=	  printf(" %p %p\n", (void *)0, (void *)ULONG_MAX);

	count	+= ft_printf(" %x %x %x ", LONG_MAX, LONG_MIN, ULONG_MAX);
	count2	+=	  printf(" %x %x %x ", LONG_MAX, LONG_MIN, ULONG_MAX);

	count	+= ft_printf(" %p\n", (void *)-14523);
	count2	+=	  printf(" %p\n", (void *)-14523);


	printf("my: %d\nog: %d", count2, count);
	return (0);
}
