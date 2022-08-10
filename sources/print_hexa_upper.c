/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hexa_upper.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 14:15:41 by ahorling      #+#    #+#                 */
/*   Updated: 2022/07/20 18:09:51 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	print_hexa_upper(unsigned int i, size_t *length)
{
	char	*hexa_string;

	hexa_string = ft_ulong_to_hexa_upper(i);
	ft_putstr(hexa_string);
	*length = *length + ft_strlen(hexa_string);
	return ;
}