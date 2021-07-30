/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/31 11:54:46 by alexander     #+#    #+#                 */
/*   Updated: 2021/07/30 13:00:58 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*print_flags	*ft_initialize_flags(print_flags *flag, const char *format)
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
	flag->format = format;
}*/

int ft_printf(const char *format, ...)
{
	print_flags *flag;
	int			ret;
	
	flag = (print_flags *)malloc(sizeof(print_flags));
	if (flag == NULL)
		return(-1);
	ret = 0;
	flag->format = format;
	va_start(flag->args, format);
	while (*flag->format != '\0')
	{
		if (*flag->format == '%')
		{
			ft_check_format(flag);
		}
		else
		{
			write(1, flag->format, 1);
			flag->format++;
			flag->lengthtotal++;
		}
	}
	va_end(flag->args);
	ret = flag->lengthtotal;
	free(flag);
	printf("\nreturn value is %d", ret);
	return(ret);
}

int		main()
{
//	char	character;
	char	*string = "hello there";

//	character = 'B';
	ft_printf("%s\n", string);
//	ft_printf("hello world %c\n", character);
	return(1);
}