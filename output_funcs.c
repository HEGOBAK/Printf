/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:27:57 by jchu              #+#    #+#             */
/*   Updated: 2023/01/13 12:13:45 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	output_ptr(va_list args)
{
	void	*n;

	ft_putchar('0');
	ft_putchar('x');
	n = va_arg(args, void *);
	return (ft_unsigned_putbase((uint64_t)n, 16, 2));
}

int	output_unsigned(va_list args)
{
	int	n;

	n = va_arg(args, int);
	if (n < 0)
		return (ft_putbase(4294967295 + n + 1, 10));
	else
		return (ft_putbase(n, 10));
	return (0);
}
