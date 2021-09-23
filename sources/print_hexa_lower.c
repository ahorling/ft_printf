/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_lower.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 13:37:27 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/23 14:59:01 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	print_hexa_lower(s_info info)
{
	long long	n;
	int			length;

	n = (unsigned int)va_arg(info->arg, long long)
	length = ft_hexalower(n);
	info->format++;
	info->length = info->length + length;
}