/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:03:55 by jchu              #+#    #+#             */
/*   Updated: 2023/01/13 13:23:49 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

//---------printf.c-------------//
int			ft_printf(const char *str, ...);
int			ft_print(const char *str, va_list args);
int			due_to_norm(const char *str, va_list args);

//---------utils.c-------------//
void		ft_putstr(const char *str);
size_t		ft_strlen(const char *str);
void		ft_putchar(int c);

//---------putbase.c-------------//
int			ft_putbase(int64_t number, int base);
int			ft_unsigned_putbase(uint64_t number, int base, int n);
int			ft_caphex(uint64_t number, int base);
void		tqs_to_norm_up(char *str, uint64_t number, int base, int *a);
void		tqs_to_norm_low(char *str, uint64_t number, int base, int *a);

//---------output_funcs.c-------------//
int			output_char(va_list args);
int			output_str(va_list args);
int			output_num(va_list args, int base);
int			output_ptr(va_list args);
int			output_hex(va_list args, int base, char c);
int			output_unsigned(va_list args);

#endif