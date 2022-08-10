/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_pointer.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 16:09:08 by ahorling      #+#    #+#                 */
/*   Updated: 2022/08/01 16:17:48 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	print_pointer(unsigned long i, size_t *length)
{
	char	*string;

	ft_putstr("0x");
	string = ft_ulong_to_hexa_lower(i);
	ft_putstr(string);
	*length = *length + ft_strlen(string) + 2;
}
