/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:14:29 by alexander     #+#    #+#                 */
/*   Updated: 2021/04/12 21:23:52 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		while (size > 0)
		{
			((char *)dest)[size - 1] = ((char *)src)[size - 1];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
