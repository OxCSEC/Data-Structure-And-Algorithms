#include <stdio.h>

void insertionS(int* arrptr, int length) {
	int i, j, temp;
	for (i = 1; i < length; i++) {

		temp = *(arrptr + i);
		for (j = i - 1; j >= 0 && temp <= *(arrptr + j); j--) {
				*(arrptr + j + 1) = *(arrptr + j);
		}
		*(arrptr + j + 1) = temp;
	}
}


int main() {
	int arr[] = { 21,32,1,3,12,44,14,66 };
	int* arrptr = arr;
	insertionS(arrptr, sizeof(arr) / 4);
	int i;
	for (i = 0; i < sizeof(arr) / 4; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}