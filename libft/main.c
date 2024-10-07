#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(int argc, char** argv)
{
  char src[50] = "GeeksForGeeks is for programming geeks.";
	char dest[50];

	strncpy(dest, src, 60);

	printf("dest: %s\nsrc: %s\n", dest, src);

	dest[13] = 'F';

	printf("dest: %s\nsrc: %s", dest, src);

	return 0;
}