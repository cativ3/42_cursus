#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(int argc, char** argv)
{
<<<<<<< Updated upstream
	char *s1 = "aaloremaa";
	char *s2 = ft_strtrim(s1, "a");
	printf("%s|\n", s2);
=======
	char c = 126;
	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));

>>>>>>> Stashed changes
	return 0;
}
