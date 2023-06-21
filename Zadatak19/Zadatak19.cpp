#include <stdio.h>

int ima_li_5(int br)
{
    if (br == 0)
        return 0;
    if (br % 10 == 5)
        return 1;
    return ima_li_5(br / 10);
}

int main()
{
    int br;
    scanf_s("%d", &br);

    if (ima_li_5(br)) {
        printf("Broj sadrzi 5");
    }else{
        printf("Broj ne sadrzi 5");
    }
}