#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

void	func(unsigned int i, char* c)
{
	*c = 'A';
}

int main(int argc, char** argv)
{
	ft_putchar_fd('A', 1);
	return 0;
}
