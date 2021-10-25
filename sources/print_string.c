/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_string.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 14:54:19 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 16:42:03 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_string(t_info *info)
{
	char	*string;
	int		length;

	string = va_arg(info->arg, char *);
	if (string == NULL)
		string == "(null)";
	length = ft_strlen(string);
	ft_putstr(string);
	info->length = info->length + length;
	info->format++;
	free(string);
	return ;
}
