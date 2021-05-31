/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/31 11:54:46 by alexander     #+#    #+#                 */
/*   Updated: 2021/05/31 15:38:53 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

print_flags	*ft_initialize_flags(print_flags *flag)
{
	flag->width = 0;
	flag->precision = 0;
	flag->zero = 0;
	flag->period = 0;
	flag->hyphen = 0;
	flag->lengthtotal = 0;
	flag->polarity = 0;
	flag->is_zero = 0;
	flag->percentage = 0;
	flag->space = 0;
}

void	ft_check_format(print_flags flag, char *format, int i)
{
	while(ft_isalpha(format[i]) == 0 && format[i] != '%')
	{
		if(format[i] == ' ')
		if(format[i] == '.')
		if(format[i] == '0')
		if(format[i] == '*')
		if(format[i] == '-')
		if(ft_isdigit(format[i]) != 0)
	}
}

int ft_printf(const char *format, ...)
{
	print_flags *flag;
	int			i;
	int			ret;
	
	flag = (print_flags *)malloc(sizeof(print_flags));
	if (tab == NULL)
		return(-1);
	ft_initialize_flags(flag);
	va_start(flag->args, format);
	while (format[i] != '\0' )
	{
		if (format[i] == '%')
			i = ft_check_format(flag, format, i + 1);
		else
		{
			ret++;
			write(1, &format[i], 1);
		}
	}
	va_end(flag->args);
	ret = flag->lengthtotal + ret;
	free(flag);
	return(ret);
}