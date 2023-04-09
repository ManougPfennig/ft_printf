/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:57:34 by mapfenni          #+#    #+#             */
/*   Updated: 2023/04/09 15:40:38 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_for_letr(char c, va_list args)
{
	int	total;

	total = 0;
	if (c == 'c' && ++total)
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		total += ft_putstr_len(va_arg(args, char *));
	else if (c == 'p')
	{
		total += ft_putstr_len("0x");
		total += ft_putnbr_base_ull_len (va_arg(args, unsigned long long), "0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')
		total += ft_putnbr_len(va_arg(args, int));
	else if (c == 'u')
		total += ft_putnbr_u_len(va_arg(args, unsigned int));
	else if (c == 'x')
		total += ft_putnbr_base_len(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		total += ft_putnbr_base_len(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == '%' && ++total)
		ft_putchar('%');
	return (total);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%' && ++total)
			ft_putchar(str[i]);
		else
		{
			while (str[i] == ' ')
				i++;
			i++;
			total += print_for_letr(str[i], args);
		}
		i++;
	}
	va_end(args);
	return (total);
}

// #include <limits.h>
// #include <stdio.h>
// int main ()
// {
// 	ft_printf("%x / %x\n", -1, 499992);
// 	printf("%x / %x\n", -1, 499992);
// }
