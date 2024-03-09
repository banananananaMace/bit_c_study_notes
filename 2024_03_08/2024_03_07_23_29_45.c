#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int *p;
	printf("%p\n", p);
	*p = 100;
	return 0;
}
