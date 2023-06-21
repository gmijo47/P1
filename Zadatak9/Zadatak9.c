#include <stdio.h>

void main() {
	char a, arr[50];
	int i = 0, j;
	printf("Molimo unosite znakove, za kraj unesite x\n");
	do {
		fseek(stdin, 0, SEEK_END);
		scanf_s("%c", &a);
		arr[i] = a;
		i++;
	} while (a != 'x');

	printf("_____________________\n\n");
	for (j = 0; j < i; j++) {
		printf("%c - ", arr[j]);
		a = arr[j];

		if((int)a >= 'A' && (int)a <= 'Z' || (int)a >= 'a' && (int)a <= 'z') {
			printf("%c\n", a);
		}else {
			
			printf("%d \n", (int)a);
		}
	}
}
