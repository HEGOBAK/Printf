/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:09:33 by jchu              #+#    #+#             */
/*   Updated: 2023/01/13 11:32:05 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putstr(const char *str)
{
	while (*str)
		ft_putchar(*str++);
}

size_t	ft_strlen(const char *str)
{
	size_t	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}
