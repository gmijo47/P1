#include <stdio.h>


void ispis(int broj) {

	printf("Sredina je %d ",  broj);
}
int srednnji(int arr[]) {
	int pom, i, j;

	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (arr[j] < arr[i]) {
				pom = arr[i];
				arr[i] = arr[j];
				arr[j] = pom;
			}
		}
	}

	return arr[2];
}

void main() {
	int i, arr[5];

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	ispis(srednnji(&arr));
}