#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(int argc, char** argv)
{
	char *s1 = "aaloremaa";
	char *s2 = ft_strtrim(s1, "a");
	printf("%s|\n", s2);
	return 0;
}
