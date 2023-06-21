#include <stdio.h>

void ispis(char arr[]) {
	int i;
	printf("Slova engleskog alfabeta nisu:\n");
	for (i = 0; i < 20; i++) {

		if (arr[i] < 'A' || arr[i] > 'z') {

			printf("%c\n", arr[i]);
		}
	}
}

void main() {

	int i;
	char arr[20];
	
	for (i = 0; i < 20; i++) {

		fseek(stdin, 0, SEEK_END);
		scanf_s("%c", &arr[i]);

	}

	ispis(arr);

}