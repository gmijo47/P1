#include <stdio.h>

void main() {
	char arr[50], a;
	int i = 0, scount[5] = { 0, 0, 0, 0, 0 }, j;

	do {

		fseek(stdin, 0, SEEK_END);
		scanf_s("%c", &a);
		arr[i] = a;
			i++;

	} while (i < 3 ||
		arr[i - 1] != 'd' || arr[i - 2] != 'n' || arr[i - 3] != 'e');

	for (j = 0; j < i; j++) {
		switch (arr[j])
		{
		case 'A':
		case 'a':{

			scount[0]++;
			break;

			}
		case 'E':
		case 'e': {

			scount[1]++;
			break;

		}
		case 'I':
		case 'i': {

			scount[2]++;
			break;

		}
		case 'O':
		case 'o': {

			scount[3]++;
			break;

		}
		case 'U':
		case 'u': {

			scount[4]++;
			break;

		}
		default:
			break;
		}
	}
	printf("Broj unesenih samoglasnika je:\n A, a: %d\n E, e: %d\n I, i: %d\n O, o: %d\n U, u: %d", scount[0], scount[1], scount[2], scount[3], scount[4]);
}