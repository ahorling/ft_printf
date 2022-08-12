/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_lower.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 13:37:27 by ahorling      #+#    #+#                 */
/*   Updated: 2022/08/12 18:56:05 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	print_hexa_lower(unsigned int i, size_t *length)
{
	char	*hexa_string;

	hexa_string = ft_ulong_to_hexa_lower(i);
	if (!hexa_string)
		return ;
	ft_putstr(hexa_string);
	*length = *length + ft_strlen(hexa_string);
	return ;
}
