/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_percentage.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:57:29 by ahorling      #+#    #+#                 */
/*   Updated: 2022/07/13 17:16:48 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_percentage(size_t *length)
{
	ft_putchar('%');
	*length++;
	return ;
}
