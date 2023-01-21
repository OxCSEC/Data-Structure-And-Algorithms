#include <stdio.h>

void selectionsort(int* arrptr , int length) {
	int i, j, min , index;
	for (i = 0; i < length-1; i++) {
		min = *(arrptr + length - 1);
		index = length - 1;
		for (j = i; j < length-1; j++) {
			if (min > *(arrptr + j)) {
				min = *(arrptr + j);
				index = j;
			}
		}

		*(arrptr + index) = *(arrptr + i);
		*(arrptr + i) = min;

	}
}

int main() {
	int arr[] = { 22, 1, 4, 14, 44, 21, 7, 42, 63, 100, 3, 9 };
	int length = sizeof(arr) / 4;
	printf("array length is :%d\n", length);
	selectionsort(&arr, sizeof(arr) / 4);
	int counter;
	for (counter = 0; counter < length; counter++) {
		printf("%d ", arr[counter]);
	}


	return 0;
}