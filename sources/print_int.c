/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_int.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 15:12:28 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/20 15:49:40 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	print_int(s_info *info)
{
	long long	n;
	int			length;

	n = (int)(va_arg(info->arg, long long));
	length = ft_numberleng(n);
	ft_putnbr(n);
	info->length = info->length + length;
	info->format++;
}