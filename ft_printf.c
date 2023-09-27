/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:15:31 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/23 18:22:03 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'p')
		count += print_pointer(va_arg(args, unsigned long));
	else if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(args, unsigned int), c);
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			count += ft_convert(args, s[++i]);
		else
			count += ft_putchar(s[i]);
		i++;
	}	
	va_end(args);
	return (count);
}
