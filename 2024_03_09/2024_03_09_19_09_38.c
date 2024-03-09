#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#define log(fmt, ...) printf("[%s:%d] " fmt, __func__, __LINE__, ##__VA_ARGS__)

void printf_arr_1(int arr[3][5], int x, int y)
{
	log("%s\n", "this is demo");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return;
}

void pritnf_arr_2(int (*ptr)[5], int x, int y)
{
	log("%s\n", "this is demo");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%d ", *(*(ptr + i)) + j);
		}
		printf("\n");
	}
	return;
}

void pritnf_arr_3(int **ptr, int x, int y)
{
	log("%s\n", "this is demo");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%d ", *(*(ptr + i)) + j);
		}
		printf("\n");
	}
	return;
}

int main(int argc, char *argv[])
{
	int arr[3][5] = {
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7},
	};
	int (*ptr)[5] = arr;
	int *ptr_arr[3] = {arr[0], arr[1], arr[2]};
	int **ptr_1 = ptr_arr;
	printf_arr_1(arr, 3, 5);
	pritnf_arr_2(ptr, 3, 5);
	pritnf_arr_3(ptr_1, 3, 5);
	return 0;
}
