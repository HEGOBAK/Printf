/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:12:54 by jchu              #+#    #+#             */
/*   Updated: 2023/01/27 17:01:17 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	output_str(char *str)
{
	int	t;

	t = 0;
	if (str == NULL)
		t = output_str("(null)");
	else
	{
		while (*str)
		{
			t += ft_putchar(*str);
			str++;
		}
	}
	return (t);
}

int	output_num(int nbr, int base)
{
	return (ft_putbase(nbr, base));
}

int	output_ptr(uint64_t ptr)
{
	int		t;

	t = ft_putchar('0');
	t += ft_putchar('x');
	return (ft_unsigned_putbase(ptr, 16, t));
}

int	output_unsigned(unsigned int nbr)
{
	if (nbr < 0)
		return (ft_putbase(4294967295 + nbr + 1, 10));
	else
		return (ft_putbase(nbr, 10));
	return (0);
}
