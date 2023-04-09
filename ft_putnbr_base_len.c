/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:20:15 by mapfenni          #+#    #+#             */
/*   Updated: 2023/04/09 18:04:31 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_len(unsigned int nbr, char *base)
{
	int		index_length;
	long	nb;
	int		total;

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

int	ft_putnbase_ull(unsigned long long nbr, char *base)
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
		total += ft_putnbase_ull((nb / index_length), base);
	ft_putchar((base[(nb % index_length)]));
	return (total);
}
