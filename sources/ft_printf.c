/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:57:29 by ahorling      #+#    #+#                 */
/*   Updated: 2022/07/20 18:05:53 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	analyze_conversion(va_list arg, size_t *length, char conversion_flag)
{
	if (conversion_flag == 'i' || conversion_flag == 'd')
		print_int(va_arg(arg, int), length);
	else if (conversion_flag == 'c')
		print_char(va_arg(arg, int), length);
	else if (conversion_flag == 's')
		print_string(va_arg(arg, char*), length);
	else if (conversion_flag == '%')
		print_percent(length);
	else if (conversion_flag == 'x')
		print_hexa_lower(va_arg(arg, unsigned int), length);
	else if (conversion_flag == 'X')
		print_hexa_upper(va_arg(arg, unsigned int), length);
	else if (conversion_flag == 'u')
		print_unsigned(va_arg(arg, unsigned int), length);
	else if (conversion_flag == 'p')
		print_pointer(va_arg(arg, unsigned long), length);
}

int	ft_printf(const char *format, ...)
{
	size_t	length;
	int	i;
	va_list	arg;

	length = 0;
	i = 0;
	if (!format)
		return(0);
	va_start(arg, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%')
		{
			ft_putchar(format[i]);
			i++;
			length++;
		}
		if (format[i] == '%')
		{
			i++;
			analyze_conversion(arg, &length, format[i]);
			i++;
		}
	}
	va_end(arg);
	return (length);
}
