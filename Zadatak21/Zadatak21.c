/*Napisati program koji unosi 20 znakova i u funkciji ispis() ispisuje ih na način da za svako 
malo slovo engleskog alfabeta ispiše odgovarajuće veliko i obratno, dok sve znakove koji 
nisu slova engleskog alfabeta ispisuje kako su i uneseni.*/

#include <stdio.h>
#include <ctype.h>

#define num 5

void ispis(char arr[]) {

	int i;

	for (i = 0; i < num; i++) {
		if (isalpha(arr[i])) {
			if (islower(arr[i])) {

				printf("%c -> %c\n", arr[i], toupper(arr[i]));

			}
			else {
				
				printf("%c -> %c\n", arr[i], tolower(arr[i]));

			}

		}
		else {
			printf("%c -> %c\n", arr[i], arr[i]);
		}
	}
}

void main() {

	int i;
	char arr[num];

	for (i = 0; i < num; i++) {
		fseek(stdin, 0, SEEK_END);
		scanf_s("%c", &arr[i]);
	}

	ispis(arr);

}