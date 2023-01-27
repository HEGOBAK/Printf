/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:03:55 by jchu              #+#    #+#             */
/*   Updated: 2023/01/27 17:30:27 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

//---------printf.c-------------//
int		ft_printf(const char *str, ...);
int		due_to_norm(const char str, va_list *args);

//---------utils.c-------------//
int		ft_putchar(int c);
size_t	ft_strlen(const char *str);

//---------putbase.c-------------//
int		ft_putbase(int64_t number, int base);
int		ft_caphex(uint64_t number, const char c);
int		ft_unsigned_putbase(uint64_t number, int base, int idx);
void	tqs_to_norm_up(char *str, uint64_t number, int base, int *a);
void	tqs_to_norm_low(char *str, uint64_t number, int base, int *a);

//---------output_funcs.c-------------//
int		output_str(char *str);
int		output_num(int nbr, int base);
int		output_ptr(uint64_t ptr);
int		output_unsigned(unsigned int nbr);

#endif