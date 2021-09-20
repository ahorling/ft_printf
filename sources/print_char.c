/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_char.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 13:19:43 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/20 13:46:31 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	print_char(s_info *info)
{
	char c;

	c = va_arg(info->arg, int);
	ft_putchar(c);
	info->length++;
	info->format++;
}