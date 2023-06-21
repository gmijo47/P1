/*Napisati program koji unosi realne brojeve sve dok zadnji uneseni broj ne bude jednak 
nekom od ranije unesenih brojeva. Nakon toga program u funkciji ispis() ispisuje one 
brojeve čiji je cijeli dio 100 ili više puta veći od specijalnog dijela.
*/
#include <stdio.h>

void ispis(float arr[], int br) {

	int cdio, i;
	float ddio;
	printf("-------\n");
	for (i = 0; i < br-1; i++) {
		cdio = (int)arr[i];
		ddio = arr[i] - cdio;

		if (((float)cdio / 100) > ddio) {
			printf("%.2f\n", arr[i]);
		}
	}
}

void main() {

	int i = 0, j, cont = 1;
	float arr[50];

	while (cont) { 
		scanf_s("%f", &arr[i]);
		if (i >= 1) {
			for (j = 0; j < i; j++) {
				if (arr[i] != arr[j]) {
					continue;
				}
				else {
					cont = 0;
					
				}
			}
		}
		i++;
		continue;
	}

	ispis(arr, i);
}