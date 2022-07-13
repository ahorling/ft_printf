/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_lower.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 13:37:27 by ahorling      #+#    #+#                 */
/*   Updated: 2022/07/13 17:14:49 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_hexa_lower(unsigned int i, size_t *length)
{
	
	char	*hexa_string;

	hexa_string = ft_ulong_to_hexa_lower(i);
	ft_putstr(hexa_string);
	*length = *length + ft_strlen(hexa_string);
	return ;
}
