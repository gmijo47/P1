#include <stdio.h>

void main() {
	int arr[50], i = 0, a, temp, count, pon = 0, comm;
	int j = 0, k;
	do {

		scanf_s("%d", &a);

		if (a <= 0) {
			printf("Uneseni broj nije prirodan unesite neki drugi broj");
		}
		else {
			arr[i] = a;
			i++;
		}

	} while (i < 4 || 
		(arr[i-1] != arr[i - 2] || arr[i - 1] != arr[i - 3] || arr[i - 1] != arr[i - 4]) ||
		(arr[i-1] > 10 || arr[i - 2] > 10 || arr[i - 3] > 10 || arr[i - 4] > 10 )
		);


	for (j = 0; j < i; j++) {
		temp = arr[j];
		count = 1;
		for (k = j + 1; k < i; k++) {
			if (temp == arr[k]) {
				count++;
			}
			if (count > pon) {
				pon = count;
				comm = arr[j];
			}
		}
	}

	printf("Broj koji se najcesce ponvlja je %d, i to se ponavlja %d puta", comm, pon);

}