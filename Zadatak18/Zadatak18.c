#include <stdio.h>
#include <limits.h>

void par_najblizih(int arr[])
{
    int min_diff = INT_MAX, br1, br2, j, i, diff;
    for (i = 0; i < 20; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            diff = abs(arr[i] - arr[j]);
            if (diff < min_diff)
            {
                min_diff = diff;
                br1 = arr[i];
                br2 = arr[j];
            }
        }
    }
    printf("Dva najbliza broja su %d i %d\n", br1, br2);
}

void main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    par_najblizih(arr);
}