/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:26:19 by ahorling      #+#    #+#                 */
/*   Updated: 2022/08/01 14:50:55 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	print_char(int c, size_t *length);
void	print_percent(size_t *length);
void	print_string(char *string, size_t *length);
void	print_int(int i, size_t *length);
void	print_unsigned(unsigned int i, size_t *length);
void	print_hexa_lower(unsigned int i, size_t *length);
void	print_hexa_upper(unsigned int i, size_t *length);
void	print_pointer(unsigned long i, size_t *length);
int		print_format(char c, size_t *length, int *i);

#endif