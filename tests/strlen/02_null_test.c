#include <string.h>
#include "../../real_tests/libft.h"

int32_t	null_test(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	else
		return (1);
}
