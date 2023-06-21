/*Napisati program koji u funkciji unos() unosi 20 cijelih brojeva, u funkciji par_nepar()
raspoređuje ih u dva niza brojeva, tj. parne smješta u jedan, a neparne u drugi niz. Oba 
niza ispisuju se u glavnom programu.*/

#include <stdio.h>
#define num 5


void par_nepar(int arr[], int par[],  int nepar[], int *brp, int *brnp){

	int i, br1 = 0, br2 = 0;

	for (i = 0; i < num; i++){

		if (arr[i] % 2 == 0) {
				par[br1] = arr[i];
				br1++;
		}
		else {
			nepar[br2] = arr[i];
			br2++;
		}

	}
	*brp = br1;
	*brnp = br2;

}

void main() {
	int arr[20], par[20], nepar[20], i = 0, br_par, br_npar;

	for (i; i < num; i++){
			
		scanf_s("%d", &arr[i]);

	}

	par_nepar(arr, par, nepar, &br_par, &br_npar);

	printf("Parni: \n");
	for (i = 0; i < br_par; i++)
	{
		printf("%d\n", par[i]);
	}

	printf("Neparni: \n");
	for (i = 0; i < br_npar; i++)
	{
		printf("%d\n", nepar[i]);
	}


}
