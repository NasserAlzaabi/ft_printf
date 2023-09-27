/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:33:13 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/23 16:22:08 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
		count += ft_putnbr(nb);
	}
	else if (nb <= 9)
	{
		count += ft_putchar(nb + '0');
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar((nb % 10) + 48);
	}
	return (count);
}
