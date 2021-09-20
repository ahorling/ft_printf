/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:57:29 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/20 13:57:19 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../included/ft_printf.h"

void	analyze_conversion(s_info *info)
{
	info->format++;
	if (conversion_flag == 'i' || conversion_flag == 'd')
		print_int(s_info *info);
	if (conversion_flag == 'c')
		print_char(s_info *info);
	if (conversion_flag == 's')
		print_string(s_info *info);
	if (conversion_flag == '%')
		print_percent(s_info *info);
	if (conversion_flag == 'x')
		print_hexa_lower(s_info *info);
	if (conversion_flag == 'X')
		print_hexa_upper(s_info *info);
	if (conversion_flag == 'u')
		print_unsigned(s_info *info);
}

int		ft_printf(const char *format, ...)
{
	s_info	*info;
	int 	length;

	length = 0;
	info = (s_info *)malloc(sizeof(s_info));
	va_start(info->arg, format);
	info->format = format;
	while (format[i] != '\0')
	{
		while (format[i] != '%')
		{
			ft_putchar(*info->format);
			info->format++;
			info->length++;
		}
		if (*infor->format == '%')
			analyze_conversion(info);
	}
	va_end(arg);
	length = info->length;
	free(info);
	return(length);
}