#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int a = 0x11223344;
	int *pa = &a;
	char *pc = &a;
	sleep(1);
	printf("%p\n", pa);
	printf("%#x, %#x\n", *pa, *(pc + 1));
	return 0;
}
