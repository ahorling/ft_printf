/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_percentage.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:57:29 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/20 14:00:05 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	print_percentage(s_info *info)
{
	ft_putchar('%', 1);
	info->format++;
	info->length++;
}