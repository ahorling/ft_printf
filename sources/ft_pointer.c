/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:09:08 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/08 19:24:26 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_print.h"

void	ft_print_pointer(s_info *info)
{
	char	*string;
	int		i;

	i = 0;
	ft_putstr("0x");
	string = ft_ulong_to_hexa_lower(info->args, unsigned long);
	ft_putstr(*string);
	info->length = info->length;
	info->format++;
}