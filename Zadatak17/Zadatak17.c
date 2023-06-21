#include <stdio.h>
#include <ctype.h>

int issam(char c) {
	int i = 0;
	char sam[5] = {'a', 'e', 'i', 'o', 'u'};
	for (i; i < 5; i++) {
		if (sam[i] == tolower(c)) {
			return 0;
		}
	}
	return 1;
}

int obrada(char arr[], char *maxc, int *brp, int i) {

	int j = 0, k, pon, fpx = 0;
	char cmx, fcmx = arr[0];

	for (j; j < i - 1; j++) {
		pon = 0;
		cmx = arr[j];

		for (k = j; k < i - 1; k++) {
			if (tolower(arr[j]) == tolower(arr[k])) {
				pon++;
				
			}
		}

		if (pon > fpx) {
			fcmx = cmx;
			fpx = pon;
		}
	}
	*maxc = fcmx;
	*brp = fpx;

}
void main() {
	char arr[50], maxc;
	int i = 0, brp = 0;

	while (1)
	{
		if ((i < 2) || issam(arr[i - 1]) && issam(arr[i-2]) || (tolower(arr[i - 1]) != tolower(arr[i - 2]))) {
			fseek(stdin, 0, SEEK_END);
			scanf_s("%c", &arr[i]);
			i++;
			continue;
		}
		else {
			break;
		}
	}

	if (obrada(arr, &maxc, &brp, i)) {
		printf("Karakter koji se ponavlja najvise puta je %c i ponavlja se %d puta", maxc, brp);
	}

	
}