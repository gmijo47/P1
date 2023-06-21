#include <stdio.h>

int nzd(int a, int b) {

	if (b == 0) {
		return a;
	}

	return nzd(b, a % b);
}

void main() {

	int a, b, c;

	printf("Molimo unesite tri prirodna broja!\n");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("Najveci zajednicki djelioc je %d", nzd(a, nzd(b, c)));
}