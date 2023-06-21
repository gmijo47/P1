#include <stdio.h>
#define brojevi 5
void unos(int arr[]);
void prost(int arr[]);

void main() {

	int arr[brojevi], i;

	unos(&arr);


}

void unos(int arr[]) {

	int i;
	for (i = 0; i < brojevi; i++) {
		scanf_s("%d", &arr[i]);
	}

	prost(arr);


}
void prost(int arr[]) {

	int i, j, dcount, pcount = 0;
	for (i = 0; i < brojevi; i++) {
		dcount = 0;
		for (j = 1; j <= arr[i]; j++) {
			if (arr[i] % j == 0) {
				dcount++;
			}
		}
		if (dcount <= 2) {
			pcount++;
		}
	}

	printf("Uneseno je %d prostih brojeva", pcount);

}