/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_string.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/30 12:23:56 by alexander     #+#    #+#                 */
/*   Updated: 2021/07/30 13:08:30 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_string(print_flags *flag)
{
	char	*string;
	char	*temp;
	int		length;

	temp = va_arg(flag->args, char *);
	length = ft_strlen(temp);
	string = (char *)malloc(length * sizeof(char));
	ft_strlcpy(string, temp, length);
	while (*string != '\0')
	{
		write(1, string, 1);
		string++;
		flag->lengthtotal = flag->lengthtotal + length;
		flag->format++;
	}
	free(string);
}