#include <stdio.h>

void main() {
	char a;
	int i = 0, mala = 0, velika = 0;
	for (i = 0; i < 20; i++) {

		fseek(stdin, 0, SEEK_END);

		scanf_s("%c", &a);
		if (a >= 'A' && a <= 'Z') {
			velika++;
		}
		if (a >= 'a' && a <= 'z') {
			mala++;	
		}
	}
	printf("Unijeli ste %d malih i %d velikih slova", mala, velika);
}