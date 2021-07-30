/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_char.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/29 17:30:01 by alexander     #+#    #+#                 */
/*   Updated: 2021/07/30 12:04:21 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_char(print_flags *flag)
{
	char	a;

	a = va_arg(flag->args, int);
	write(1, &a, 1);
	flag->lengthtotal++;
	flag->format++;
}