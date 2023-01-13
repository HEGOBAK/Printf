/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:03:52 by jchu              #+#    #+#             */
/*   Updated: 2023/01/13 13:15:36 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	due_to_norm(const char *str, va_list args)
{
	if (*str == 'c' || *str == '%')
		return (output_char(args));
	else if (*str == 's')
		return (output_str(args));
	else if (*str == 'd' || *str == 'i')
		return (output_num(args, 10));
	else if (*str == 'u')
		return (output_unsigned(args));
	else if (*str == 'x' || *str == 'X')
		return (output_hex(args, 16, *str));
	else if (*str == 'p')
		return (output_ptr(args));
	return (0);
}

int	ft_print(const char *str, va_list args)
{
	int	count;
	int	state;

	count = 0;
	state = 0;
	while (*str)
	{
		if (state == 0)
		{
			if (*str == '%')
				state = 1;
			else
			{
				ft_putchar(*str);
				count++;
			}
		}
		else if (state == 1)
		{
			count += due_to_norm(str, args);
			state = 0;
		}
		str++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	count += ft_print(str, args);
	va_end(args);
	return (count);
}
