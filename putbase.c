/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbase.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:16:07 by jchu              #+#    #+#             */
/*   Updated: 2023/01/27 17:19:07 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	tqs_to_norm_low(char *str, uint64_t number, int base, int *a)
{
	int	idx;
	int	ret;

	idx = 0;
	while (number)
	{
		ret = number % base;
		if (ret >= 10)
			str[idx++] = 'a' + (ret - 10);
		else
			str[idx++] = '0' + ret;
		number /= base;
	}
	*a = idx;
}

void	tqs_to_norm_up(char *str, uint64_t number, int base, int *a)
{
	int	idx;
	int	ret;

	idx = 0;
	while (number)
	{
		ret = number % base;
		if (ret >= 10)
			str[idx++] = 'A' + (ret - 10);
		else
			str[idx++] = '0' + ret;
		number /= base;
	}
	*a = idx;
}

int	ft_unsigned_putbase(uint64_t number, int base, int n)
{
	int		count;
	int		idx;
	char	buf[65];

	idx = 0;
	count = n;
	while (idx < 65)
		buf[idx++] = 0;
	if (number == 0)
		return (ft_putchar('0') + count);
	tqs_to_norm_low(buf, number, base, &idx);
	idx--;
	while (idx > -1)
		count += ft_putchar(buf[idx--]);
	return (count);
}

int	ft_caphex(uint64_t number, const char c)
{
	int		count;
	int		idx;
	char	buf[65];

	idx = 0;
	count = 0;
	while (idx < 65)
		buf[idx++] = 0;
	if (number == 0)
		return (ft_putchar('0'));
	if (c == 'x')
		tqs_to_norm_low(buf, number, 16, &idx);
	else
		tqs_to_norm_up(buf, number, 16, &idx);
	idx--;
	while (idx > -1)
		count += ft_putchar(buf[idx--]);
	return (count);
}

int	ft_putbase(int64_t number, int base)
{
	int	count;

	count = 0;
	if (number < 0)
	{
		ft_putchar('-');
		count = 1;
		number = -number;
	}
	return (ft_unsigned_putbase(number, base, count));
}
