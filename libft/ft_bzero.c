/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 17:20:18 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 19:56:00 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t size)
{
	size_t	index;
	char	*s;

	s = (char *)str;
	index = 0;
	while (index < size)
	{
		s[index] = '\0';
		index++;
	}
	return (str);
}
