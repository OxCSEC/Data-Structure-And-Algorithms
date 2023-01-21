#include <stdio.h>

void bubblesort(int* arrptr, int length) {
	int i, j, temp;
	for (i = 0; i < length - 1; i++) {
		for (j = 0; j < length - i - 1; j++) {
			if (*(arrptr + j) > *(arrptr + j + 1)) {
				temp = *(arrptr + j);
				*(arrptr + j) = *(arrptr + j + 1);
				*(arrptr + j + 1) = temp;
			}
		}
	}
}

int main() {
	int arr[] = { 22, 1, 4, 14, 44, 21, 7, 42, 63, 100, 3, 9 };
	int length = sizeof(arr) / 4;
	printf("array length is :%d\n", length);
	bubblesort(&arr, sizeof(arr) / 4);
	int counter;
	for (counter = 0; counter < length; counter++) {
		printf("%d ", arr[counter]);
	}


	return 0;
}