#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	char arr1[] = "hello world\n";
	char arr2[] = "hello world\n";
	if (arr1 == arr2) {
		printf("same!\n");
	} else {
		printf("different!\n");
	}

	const char *p1 = "hello world";
	const char *p2 = "hello world";
	if (p1 == p2) {
		printf("same!\n");
	} else {
		printf("different!\n");
	}

	return 0;
}
