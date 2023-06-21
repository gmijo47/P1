#include <stdio.h>

char znak[10];

int je_li_sortiran(int n) {
    if (n == 1) {
        return 1;
    }
    if (znak[n - 1] <= znak[n - 2]) {
        return je_li_sortiran(n - 1);
    }

    return 0;
}

void main() {
    int i;

    for (i = 0; i < 10; i++) {
        fseek(stdin, 0, SEEK_END);
        scanf_s("%c", &znak[i]);
    }

    if (je_li_sortiran(i)) {
        printf("Sortirano opadajuci");
    }
    else{
        printf("Nije opadajuci sortiranmo");
    }

   
}