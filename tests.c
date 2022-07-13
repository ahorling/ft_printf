#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"


/*char	*ft_ulong_to_hexa_lower(unsigned long n)
{
	int		i;
	char	*string;
	int		temp;

	i = ft_hexlen(n);
	temp = 0;
	string = (char *)malloc((i + 1) * sizeof(char));
	if (string == NULL)
		free(string);
	string[i + 1] = '\0';
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			string[i] = temp + 48;
		if (temp > 9)
			string[i] = temp + 55;
		n = n / 16;
		i--;
	}
	return (string);
}*/

int	main()
{
	char *result;

	result = ft_ulong_to_hexa_lower(182134934);
	printf("\n");
	return (0);
}