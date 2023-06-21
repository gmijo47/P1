#include <stdio.h>
void main() {

	char samoglasnici[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
	int count = 0, i, j = 0;
	char a;

	printf("Molimo unosite znakove, za prestanak unosa upisite !\n");
		do{

			fseek(stdin, 0, SEEK_END);
			scanf_s("%c", &a);

			if (a >= 'A' && a <= 'z') {

				for (i = 0; i < 10; i++) {

					if (samoglasnici[i] == a) {

						j++;

					}
				}

				count++;
			}

		} while (a != '!');

		printf("Unijeli ste %d suglasniga", count-j);
}