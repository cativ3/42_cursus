#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(int argc, char** argv)
{
	char *str = "2147483648";

	int res = atoi(str);
	printf("res: %d\n", res);

	int res_ft = ft_atoi(str);
	printf("res_ft: %d\n", res_ft);

	return 0;
}
