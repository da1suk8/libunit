#include "libft.h"

int	ft_atoi(const char *str)
{
	int			minus;
	long		number;

	number = 0;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		minus = (*str++ == '-');
	while ('0' <= *str && *str <= '9')
	{
		number = 10 * number + (*str++ - '0');
		if (number < LONG_MIN || LONG_MAX < number)
		{
			if (minus)
				number = LONG_MIN;
			else
				number = LONG_MAX;
			return (number);
		}
	}
	if (minus)
		number = -number;
	return ((int)number);
}
