/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:03:52 by jchu              #+#    #+#             */
/*   Updated: 2023/01/27 16:43:55 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	due_to_norm(const char str, va_list *args)
{
	if (str == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (str == '%')
		return (ft_putchar('%'));
	else if (str == 's')
		return (output_str(va_arg(*args, char *)));
	else if (str == 'd' || str == 'i')
		return (output_num(va_arg(*args, int), 10));
	else if (str == 'u')
		return (output_unsigned(va_arg(*args, unsigned int)));
	else if (str == 'x' || str == 'X')
		return (ft_caphex(va_arg(*args, unsigned int), str));
	else if (str == 'p')
		return (output_ptr(va_arg(*args, unsigned long long)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += due_to_norm(str[i + 1], &args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			print_length++;
		}
		i++;
	}
	va_end(args);
	return (print_length);
}
