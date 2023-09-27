/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:38:41 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/19 20:49:53 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int n, char c);
int	print_pointer(unsigned long n);
int	ft_putunbr(unsigned int n);
int	ft_printf(const char *s, ...);

#endif