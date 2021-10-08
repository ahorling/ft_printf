/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_lower.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 13:37:27 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/08 18:02:14 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	print_hexa_lower(s_info info)
{
	unsigned long	n;
	char			*hexa_string

	n = (unsigned int)va_arg(info->arg, unsigned long);
	hexa_string = ft_ulong_to_hexa_lower(n);
	ft_putstr(hexa_string);
	info->format++;
	info->length = info->length + ft_strlen(hexa_string);
}