#include <stdio.h>
#define num 5

void statistika(int *max, int *min, int arr[]) {

	int i;
	*min = arr[0];
	*max = arr[0];

	for (i = 1; i < num; i++) {

		if (arr[i] > *max) {
			*max = arr[i];
		}
		else if (arr[i] < *min) {
			*min = arr[i];
		}

	}
}

void main() {
	int i, arr[num], max = -1, min = -1;

	for (i = 0; i < num; i++) {
		scanf_s("%d", &arr[i]);
	}

	statistika(&max, &min, arr);

	printf("Maksimalni broj je %d, dok je minimalni broj %d", max, min);
}