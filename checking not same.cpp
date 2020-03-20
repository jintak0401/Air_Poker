#include <stdio.h>

int checking_not_same(int * user, int* enemy) {
	int cir, cir2;
	for (cir = 0; cir < 5; cir++) {
		for (cir2 = 1; cir2 + cir < 5; cir2++) {
			if (*(user + cir) == *(user + cir + cir2)) {
				return 1;
			}

		}
	}
	for (cir = 0; cir < 5; cir++) {
		for (cir2 = 1; cir2 + cir < 5; cir2++) {
			if (*(enemy + cir) == *(enemy + cir + cir2)) {
				return 1;
			}

		}
	}
	for (cir = 0; cir < 5; cir++) {
		for (cir2 = 0; cir2 < 5; cir2++) {
			if (*(user + cir) == *(enemy + cir2)) {
				return 1;
			}
		}
	}
	return 0;
}