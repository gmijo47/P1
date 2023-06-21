#include <stdio.h>

void main(){
	int dcb, b, ost[100], i = 0;

	printf("Molimo unesite dekatski cijeli broj [0-255]:\n");
	scanf_s("%d", &dcb);
	if (dcb <= 0 || dcb > 255) {
		printf("Uneseni broj nije validan [0-255]");
		return;
	}
	printf("Molimo unesite bazu [0-9]\n");
	scanf_s("%d", &b);
	if (b <= 0 || b > 9) {
		printf("Uneseni broj nije validan [0-9]");
		return;
	}
	
	if (b == 1) {

		printf("Broj %d, nije moguce predstaviti u bazi 1", dcb);

	}
	else {
		printf("(%d)10 = > (", dcb);
		while (dcb > 0) {
			ost[i] = dcb % b;
			dcb = dcb / b;
			i++;
		}

		for (i > 0; i--;) {
			printf("%d", ost[i]);
		}
		printf(")%d", b);
	}

}