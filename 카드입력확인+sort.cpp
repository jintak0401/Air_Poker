#include <stdio.h>


int check(int* num, int* arr) {
	int cir=0;
	while (cir<5) {
		if (*(arr + cir) ==* num)
			return 0;
		else 
			cir++;
	}
	printf("잘못 선택하셨습니다.\n");
	*num = 0;
	return 1;
}
void sort(int* ptr) {
	int cir, cir2, a;
	for (cir = 0; cir < 5; cir++) {
		for (cir2 = 0; cir2 + cir < 5; cir2++) {
			if (*(ptr + cir) < *(ptr + cir + cir2)) {
				a = *(ptr + cir);
				*(ptr + cir) = *(ptr + cir + cir2);
				*(ptr + cir + cir2) = a;
			}
		}
	}
	for (cir = 0; cir < 5; cir++) {
		if (*(ptr + cir) == 47) {
			a = *(ptr + cir);
			*(ptr + cir) = *(ptr);
			*(ptr) = a;
		}
	}
}
void user_sort(int* user_num, char* user_shape,int* user_check) {
	int cir, cir2, a;
	char b;
	for (cir = 0; cir < 5; cir++) {
		for (cir2 = 0; cir2 + cir < 5; cir2++) {
			if (*(user_num + cir) > *(user_num + cir + cir2)) {
				a = *(user_num + cir);
				*(user_num + cir) = *(user_num + cir + cir2);
				*(user_num + cir + cir2) = a;
				a = *(user_check + cir);
				*(user_check + cir) = *(user_check + cir + cir2);
				*(user_check + cir + cir2) = a;
				b = *(user_shape + cir);
				*(user_shape + cir) = *(user_shape + cir + cir2);
				*(user_shape + cir + cir2) = b;
			}
		}
	}
}
