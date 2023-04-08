/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 02:30:21 by mapfenni          #+#    #+#             */
/*   Updated: 2023/04/08 02:38:35 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *, ...);
int		ft_putstr_len(char *str);
int		ft_putnbr_len(int nb);
int		ft_putnbr_base_len(int nbr, char *base);
void	ft_putchar(char c);
int		ft_putnbr_u_len(unsigned int nb);
int		ft_putnbr_base_ull_len(unsigned long long nbr, char *base);

#endif