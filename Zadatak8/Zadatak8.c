#include <stdio.h>

void main() {

	double arr[20], cdio, dec;
	int i = 0;
	printf("Molimo unosite 20 realnih brojeva\n");
	for (i = 0; i < 20; i++) {
		scanf_s("%lf", &arr[i]);
	}
	printf("Brojevi ciji je cijeli nije barem 100 puta veci od njihovog decimalnog dijela su:\n");
	for (i--; i >= 0; i--) {
		dec = arr[i] - (int) arr[i];
		cdio = arr[i] - dec;

			if (cdio/100 < dec) {

				printf("%.2lf\n", arr[i]);

			}
	}


}
