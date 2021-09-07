/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/31 14:22:53 by alexander     #+#    #+#                 */
/*   Updated: 2021/09/07 22:45:33 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <ctype.h>
# include <string.h>
# include "../libft/libft.h"

typedef struct printf_struct
{
	va_list	args;
	int		width;
	int		precision;
	int		zero;
	int		period;
	int		hyphen;
	int		lengthtotal;
	int		polarity;
	int		is_zero;
	int		percentage;
	int		space;
	const char *format;
} print_flags;

void	ft_check_format(print_flags *flag);
void	ft_print_char(print_flags *flag);
void	ft_print_string(print_flags *flag);
void	ft_print_integer(print_flags *flag);

#endif