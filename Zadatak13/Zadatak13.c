#include <stdio.h>
#include <math.h>

void unos(int niz[]);
float aritmeticka_sredina(int arr[20]);
int najdalji(int arr[20], float sr);

int main() {

	int niz[20];
	float sr;
	unos(&niz);

	sr = aritmeticka_sredina(niz);

	printf("Artimeticka sredina je %.2f", sr);


	printf("Artimeticka sredina je %d", najdalji(niz, sr));

	
}

void unos(int niz[]) {

	int i = 0;
	for (i; i < 5; i++) {
		scanf_s("%d", &niz[i]);
	}
	
}

float aritmeticka_sredina(int arr[20]) {

	int suma = 0, i;

	for (i = 0; i < 5; i++) {
		suma += arr[i];
	}

	return suma / 5;

}

int najdalji(int arr[20], float sr) {

	int i = 0, najveci = arr[0];

	for (i; i < 5; i++) {
		if (fabs(sr - arr[i]) > najveci) {
			najveci = arr[i];
		}
	}

	return najveci;
}
