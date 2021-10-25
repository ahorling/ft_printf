/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_upper.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 14:15:41 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 17:14:33 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_hexa_upper(t_info info)
{
	size_t	n;
	char	*hexa_string;

	n = (unsigned long)(va_arg(info->arg, unsigned long));
	hexa_string = ft_ulong_to_hexa_upper(n);
	ft_putstr(hexa_string);
	info->format++;
	info->length = info->length + ft_strlen(hexa_string);
	return ;
}
