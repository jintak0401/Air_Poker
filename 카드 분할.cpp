#include <stdio.h>
#include <stdlib.h>

void cut(int * user, int* enemy, int* sum1, int* sum2)//카드분할
{
	int  cir;
	for (cir = 0; cir < 5; cir++) {
		*(user + cir) = (rand() % 59) + 6;
		*(enemy + cir) = (rand() % 59) + 6;
	}
	for (cir = 0, *sum1 = 0, *sum2 = 0; cir < 5; cir++) {
		*sum1 += *(user + cir);
		*sum2 += *(enemy + cir);
	}
}