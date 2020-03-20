#include <stdio.h>

float deleting(int* spade, int* dia, int* heart, int*clover, char* user_shape, int* user_num,char* enemy_shape,int* enemy_num ) {
	int cir,cir2;
	for (cir = 0; cir < 5; cir++) {
		if (user_shape[cir] == 'S') {
			if (spade[user_num[cir] - 1] == user_num[cir])
			spade[user_num[cir] - 1] = 0;
		}
		else if (user_shape[cir] == 'D') {
			if (dia[user_num[cir] - 1] == user_num[cir])
			dia[user_num[cir] - 1] = 0;
		}
		else if (user_shape[cir] == 'H') {
			if (heart[user_num[cir] - 1] == user_num[cir])
			heart[user_num[cir] - 1] = 0;
		}
		else if (user_shape[cir] == 'C') {
			if (clover[user_num[cir] - 1] == user_num[cir])
			clover[user_num[cir] - 1] = 0;
		}
	}
	for (cir = 0; cir < 5; cir++) {
		if (enemy_shape[cir] == 'S') {
			spade[enemy_num[cir] - 1] = 0;
		}
		else if (enemy_shape[cir] == 'D') {
			dia[enemy_num[cir] - 1] = 0;
		}
		else if (enemy_shape[cir] == 'H') {
			heart[enemy_num[cir] - 1] = 0;
		}
		else if (enemy_shape[cir] == 'C') {
			clover[enemy_num[cir] - 1] = 0;
		}
	}
	return 0;
}