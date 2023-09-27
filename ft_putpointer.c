/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:42:52 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/23 16:21:22 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n, char *s)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putpointer(n / 16, s);
	count += ft_putchar(s[n % 16]);
	return (count);
}

int	print_pointer(unsigned long n)
{
	int	count;

	count = 0;
	ft_putstr("0x");
	count = ft_putpointer(n, "0123456789abcdef");
	return (count + 2);
}
