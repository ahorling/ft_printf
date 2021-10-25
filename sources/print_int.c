/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_int.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 15:12:28 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 16:41:42 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_int(t_info *info)
{
	long long	n;
	int			length;

	if (n > 2147483647 || n < -2147483648)
		return ;
	n = (int)(va_arg(info->arg, long long));
	length = ft_numberleng(n);
	ft_putnbr(n);
	info->length = info->length + length;
	info->format++;
	return ;
}
