/*Napisati program koji unosi 20 znakova i rekurzivnom funkcijom jesu_li_velika_slova()
provjerava jesu li svi unesenih znakovi velika slova engleskog alfabeta. Rezultat se ispisuje 
u glavnom programu.*/

#include <stdio.h>
#include <ctype.h>
#define num 5

char arr[num];

int	jesu_li_velika_slova(int br) {

	if (br == num) {

		return 1;

	}else if(isupper(arr[br])){
		
		return jesu_li_velika_slova(br+1);
	}
	else { 

		return 0;

	}

}

void main() {

	int i = 0;

	for (i; i < num; i++) {
		fseek(stdin, 0, SEEK_END);
		scanf_s("%c", &arr[i]);
	}

	if (jesu_li_velika_slova(0)) {
		printf("Jesu velika slova");
	}
	else {
		printf("Nisu velika slova");
	}
}