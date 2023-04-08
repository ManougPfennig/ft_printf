/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:20:15 by mapfenni          #+#    #+#             */
/*   Updated: 2023/04/08 02:39:34 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_len(int nbr, char *base)
{
	int		index_length;
	long	nb;
	int		total;

	nb = nbr;
	index_length = 0;
	total = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (base[index_length] != '\0')
		index_length++;
	if (nb >= (index_length))
		total += ft_putnbr_base_len((nb / index_length), base);
	ft_putchar((base[(nb % index_length)]));
	return (total);
}

int	ft_putnbr_base_ull_len(unsigned long long nbr, char *base)
{
	int					index_length;
	unsigned long long	nb;
	int					total;

	nb = nbr;
	index_length = 0;
	total = 1;
	while (base[index_length] != '\0')
		index_length++;
	if (nb >= (index_length))
		total += ft_putnbr_base_len((nb / index_length), base);
	ft_putchar((base[(nb % index_length)]));
	return (total);
}


// #include <stdio.h>
// int main()
// {
// 	char *base = "0123456789abcdef";
// 	printf("\n%i", ft_putnbr_base(0, base));
// }