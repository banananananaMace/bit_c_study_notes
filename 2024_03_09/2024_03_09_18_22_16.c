#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	int arr1[] = {1, 2, 3, 4, 5};
	int (*p1)[5] = &arr1;

	for (int i = 0; i < 5; i++) {
		printf("%d ", *(*p1) + i);
	}
	printf("\n");

	int arr2[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	int (*p2)[3] = arr2;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p2 + i)) + j);
		}
		printf("\n");
	}

	char *arr3[5] = {
			"hello world",
			"hello china",
			"hello england",
			"hello america",
			"hello japan"
	};

	char *(*p3)[5] = &arr3;
	for (int i = 0; i < 5; i++) {
		printf("%s\n", *(*p3 + i));
	}


	return 0;
}

