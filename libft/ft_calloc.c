/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 12:41:10 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/13 12:51:34 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	total;
	size_t	i;
	char	*allocated;

	i = 0;
	total = nitems * size;
	allocated = malloc(total);
	if (allocated == NULL)
		return (NULL);
	while (total - i > 0)
	{
		allocated[i] = 0;
		i++;
	}
	return ((void *)allocated);
}
