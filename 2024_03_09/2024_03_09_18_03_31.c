#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {2, 3, 4, 5, 6};
	int arr3[] = {3, 4, 5, 6, 7};
	int *ptr[] = {arr1, arr2, arr3};
	for (int i = 0; i  < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", *(*(ptr + i) + j));
		}
		printf("\n");
	}
	return 0;
}
