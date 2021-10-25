/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_char.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:19:43 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 16:41:12 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	print_char(t_info *info)
{
	char	c;

	c = va_arg(info->arg, int);
	ft_putchar(c);
	info->length++;
	info->format++;
	return ;
}
