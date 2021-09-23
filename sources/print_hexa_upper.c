/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_upper.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 14:15:41 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/23 15:02:23 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	print_hexa_upper(s_info info)
{
	long long	n;
	int			length;

	n = (unsigned int)va_arg(info->arg, long long)
	length = ft_print_hexa_upper(n);
	info->format++;
	info->length = info->length + length;