/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_unsigned.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 13:15:12 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 16:08:33 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putunsigned(unsigned int n)
{
	if (n > 9)
	{
		ft_putunsigned(n / 10);
		ft_putunsigned(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
	return ;
}

void	print_unsigned(s_info *info)
{
	long long	n;
	int			length;

	n = (unsigned int)va_arg(info->format, long long);
	length = numberleng(n);
	ft_putunsigned(n);
	info->format++;
	info->length = format->length + length;
}
