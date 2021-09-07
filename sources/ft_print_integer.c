/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_integer.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/07 22:15:47 by alexander     #+#    #+#                 */
/*   Updated: 2021/09/07 22:46:26 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_integer(print_flags *flag)
{
	int i;
	char *converted;

	i = va_arg(flag->args, int);
	converted = ft_itoa(i);
	i = 0;
	while (converted[i] != '\0')
	{
		write(1, &converted[i], 1);
		i++;
	}
}