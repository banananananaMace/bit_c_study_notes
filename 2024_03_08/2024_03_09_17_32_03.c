#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	char *p = "hello world\n";
	*p = 'c';
	printf("%s\n", p);
	return 0;
}
