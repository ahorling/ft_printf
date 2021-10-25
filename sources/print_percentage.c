/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_percentage.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:57:29 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 16:41:46 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_percentage(t_info *info)
{
	ft_putchar('%');
	info->format++;
	info->length++;
	return ;
}
