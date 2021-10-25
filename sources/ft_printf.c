/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 11:57:29 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 16:39:16 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	analyze_conversion(t_info *info)
{
	info->format++;
	if (conversion_flag == 'i' || conversion_flag == 'd')
		print_int(t_info *info);
	else if (conversion_flag == 'c')
		print_char(t_info *info);
	else if (conversion_flag == 's')
		print_string(t_info *info);
	else if (conversion_flag == '%')
		print_percent(t_info *info);
	else if (conversion_flag == 'x')
		print_hexa_lower(t_info *info);
	else if (conversion_flag == 'X')
		print_hexa_upper(t_info *info);
	else if (conversion_flag == 'u')
		print_unsigned(t_info *info);
	else if (conversion_flag == 'p')
		print_pointer(t_info *info);
}

int	ft_printf(const char *format, ...)
{
	size_t	length;
	t_info	*info;

	length = 0;
	info = (t_info *)malloc(sizeof(t_info));
	va_start(info->arg, format);
	info->format = ft_strdup(format);
	while (format[i] != '\0')
	{
		while (format[i] != '%')
		{
			ft_putchar(*info->format);
			info->format++;
			info->length++;
		}
		if (*info->format == '%')
			analyze_conversion(info);
	}
	va_end(arg);
	length = info->length;
	free(info);
	return (length);
}
