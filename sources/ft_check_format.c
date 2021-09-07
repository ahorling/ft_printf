/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_format.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/29 17:07:51 by alexander     #+#    #+#                 */
/*   Updated: 2021/09/07 22:22:29 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_check_format(print_flags *flag)
{
	flag->format++;
	while(isalpha(*flag->format) >= 1 || *flag->format == '%')
	{
		if(*flag->format == 'c')
			ft_print_char(flag);
		else if(*flag->format == 's')
			ft_print_string(flag);
		if(*flag->format == 'i')
			ft_print_integer(flag);
/*		if(format[i] == 'p')
			ft_print_pointer(flag);
		if(format[i] == 'd')
			ft_print_decimal(flag);
		if(format[i] == 'u')
			ft_print_unsigned_decimal(flag);
		if(format[i] == 'x')
			ft_print_hexa(flag);
		if(format[i] == 'X')
			ft_print_hexa_upper(flag);
		if(format[i] == '%')
			ft_print_percent(flag);
*/		break;
	}
}