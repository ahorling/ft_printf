/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexalower.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 14:33:05 by ahorling      #+#    #+#                 */
/*   Updated: 2021/10/25 18:17:47 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulong_to_hexa_lower(unsigned long n)
{
	int		i;
	char	*string;
	int		temp;

	i = ft_hexlen(n);
	temp = n;
	string = (char *)malloc((i + 1) * sizeof(char));
	if (string == NULL)
		free(string);
	string[i] = '\0';
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			string[i - 1] = temp + 48;
		if (temp > 9)
			string[i - 1] = temp + 87;
		n = n / 16;
		i--;
	}
	return (string);
}
