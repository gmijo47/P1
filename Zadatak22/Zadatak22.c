/*. Napisati program koji unosi cijele brojeve sve dok se ne unese prost broj, u funkciji 
najveci() pronalazi najveći uneseni broj, a zatim u funkciji svi_prosti() ispisuje sve proste 
prirodne brojeve manje od najvećeg unesenog broja.*/

#include <stdio.h>

int prost(int a) {

	int i = 1, dcnt = 0;

	if (a == 0) {
		return 0;
	}
	else {

		for  (i; i <= a; i++){

			if (a % i == 0) {
				dcnt++;
				}

		}

		if (dcnt > 2) {
			return 0;
		}
		else {
			return 1;
		}
	}
}
int najveci(int arr[], int br) {

	int njvci, i = 1;
	njvci = arr[0];

	for (i; i < br ; i++){
		if (arr[i] > njvci) {
			njvci = arr[i];
		}
	}

	return njvci;
}

void svi_prosti(int max, int br, int arr[]){
	
	int i, cnt = 0;
	printf("--------------\n");
	for (i = 0; i < max; i++) {

		if (prost(i)) {
			printf("%d\n", i);
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("Nema prostih brojeva manjih od %d", max);
	}

}



void main() {
	int i = 0, arr[50];

	while(1) {
		scanf_s("%d", &arr[i]);

		if (prost(arr[i])) {
			break;
		}
		else {
			i++;
			continue;
		}
	}

	svi_prosti(najveci(arr, i), i, arr);
}