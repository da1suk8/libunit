#include <string.h>
#include "../../real_tests/libft.h"

int32_t	basic_test(void)
{
	if (ft_strlen("Hello") == strlen("Hello"))
		return (0);
	else
		return (1);
}
