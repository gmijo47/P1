#include <stdio.h>
#include <math.h>

void main(){
	double a = 0, b = 0, sum = 0;
	int count = 0, scount = 0;
	printf("Molimo unosite realne brojeve sve dok nijova decimalna mjesta ne budu jednaka:\n");

	do {
		b = a;
		scanf_s("%lf", &a);
		if (scount == 0) {
			if (a > 0) {

				sum += a; 
				count++;
				

			}
			
			a = fabs(a - (int)a);
			b = a;
			
			scanf_s("%lf", &a);
		}


		if (scount == 0) {
			if (a > 0) {

				sum += a;
				count++;
			}

		}else {
			if (a > 0) {

				sum += a;
				count++;
			}
		}

		a = fabs(a - (int)a);

		
		scount++;
	
	} while (fabs(a - b) > 1e-9);

	printf("Prosjek svih unesenih pozitivnih brojeva je %.3lf ", sum / count);

}