#include <stdio.h>

void main() {
	int a, i, j, dc = 0, maxdj;
	printf("Molimo unesite neki prirodni broj:\n");
	scanf_s("%d", &a);

	if (a < 0) {
		printf("Uneseni broj nije priodan broj");
	}
	else {
		for (i = 1; i < a; i++) {
			if (a % i == 0) {
				dc++;
			}
		}
		if (dc <= 2) {
			//prost
		}
		else {
			for (j = 1; j < a; j++) {
				if (a % j == 0) {
					maxdj = j;
				}
				
			}
			printf("Broj %d je slozen i njegov najveci djeljitel, a da nije sam taj broj je %d", a, maxdj);
		}
	}
}
	
