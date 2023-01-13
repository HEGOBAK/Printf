/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_funcs2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:12:54 by jchu              #+#    #+#             */
/*   Updated: 2023/01/13 12:13:26 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	output_char(va_list args)
{
	char	ch;

	ch = va_arg(args, int);
	ft_putchar(ch);
	return (1);
}

int	output_str(va_list args)
{
	const char	*res;

	res = va_arg(args, const char *);
	ft_putstr(res);
	return (ft_strlen(res));
}

int	output_num(va_list args, int base)
{
	int	n;

	n = va_arg(args, int);
	return (ft_putbase(n, base));
}

int	output_hex(va_list args, int base, char c)
{
	int	n;

	if (c == 'x')
		return (output_num(args, base));
	else
	{
		n = va_arg(args, int);
		return (ft_caphex(n, base));
	}
	return (0);
}
