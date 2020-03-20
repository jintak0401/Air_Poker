#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double royal(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int cir = 0;
	if (sum == 47) {
		if (*(spade + 9) == 10 && *(spade + 10) == 11 && *(spade + 11) == 12 && *(spade + 12) == 13 && *(spade + 0) == 1) {
			printf("<♠10 ♠J ♠Q ♠K ♠A> 로얄 스트레이트 플러쉬\n");
			for (; cir < 4; cir++) {
				enemy_shape[cir] = 'S';
				enemy_num[cir] = cir + 10;
			}
			enemy_shape[4] = 'S';
			enemy_num[4] = 1;
			return 9.4;
		}
		else if (*(dia + 9) == 10 && *(dia + 10) == 11 && *(dia + 11) == 12 && *(dia + 12) == 13 && *(dia + 0) == 1) {
			printf("<◆10 ◆J ◆Q ◆K ◆A> 로얄 스트레이트 플러쉬\n");
			for (; cir < 4; cir++) {
				enemy_shape[cir] = 'D';
				enemy_num[cir] = cir + 10;
			}
			enemy_shape[4] = 'D';
			enemy_num[4] = 1;
			return 9.3;
		}
		else if (*(heart + 9) == 10 && *(heart + 10) == 11 && *(heart + 11) == 12 && *(heart + 12) == 13 && *(heart + 0) == 1) {
			printf("<♥10 ♥J ♥Q ♥K ♥A> 로얄 스트레이트 플러쉬\n");
			for (; cir < 4; cir++) {
				enemy_shape[cir] = 'H';
				enemy_num[cir] = cir + 10;
			}
			enemy_shape[4] = 'H';
			enemy_num[4] = 1;
			return 9.2;
		}
		else if (*(clover + 9) == 10 && *(clover + 10) == 11 && *(clover + 11) == 12 && *(clover + 12) == 13 && *(clover + 0) == 1) {
			printf("<♣10 ♣J ♣Q ♣K ♣A> 로얄 스트레이트 플러쉬\n");
			for (; cir < 4; cir++) {
				enemy_shape[cir] = 'C';
				enemy_num[cir] = cir + 10;
			}
			enemy_shape[4] = 'C';
			enemy_num[4] = 1;
			return 9.1;
		}
	}
	return 0;
}
double back_straight_flush(int* spade, int*  dia, int*  heart, int*  clover, int sum, char* enemy_shape, int* enemy_num) {
	int cir = 0;
	if (sum == 15) {
		if (*(spade + 0) == 1 && *(spade + 1) == 2 && *(spade + 2) == 3 && *(spade + 3) == 4 && *(spade + 4) == 5) {
			printf("♠A ♠2 ♠3 ♠4 ♠5 백 스트레레이트 플러쉬\n");
			for (; cir < 5; cir++) {
				enemy_shape[cir] = 'S';
				enemy_num[cir] = cir + 1;
			}
			return 8.9;
		}
		else if (*(dia + 0) == 1 && *(dia + 1) == 2 && *(dia + 2) == 3 && *(dia + 3) == 4 && *(dia + 4) == 5) {
			printf("◆A ◆2 ◆3 ◆4 ◆5 백 스트레레이트 플러쉬\n");
			for (; cir < 5; cir++) {
				enemy_shape[cir] = 'D';
				enemy_num[cir] = cir + 1;
			}
			return 8.8;
		}
		else if (*(heart + 0) == 1 && *(heart + 1) == 2 && *(heart + 2) == 3 && *(heart + 3) == 4 && *(heart + 4) == 5) {
			printf("♥A ♥2 ♥3 ♥4 ♥5 백 스트레레이트 플러쉬\n");
			for (; cir < 5; cir++) {
				enemy_shape[cir] = 'H';
				enemy_num[cir] = cir + 1;
			}
			return 8.7;
		}
		else if (*(clover + 0) == 1 && *(clover + 1) == 2 && *(clover + 2) == 3 && *(clover + 3) == 4 && *(clover + 4) == 5) {
			printf("♣A ♣2 ♣3 ♣4 ♣5 백 스트레레이트 플러쉬\n");
			for (; cir < 5; cir++) {
				enemy_shape[cir] = 'C';
				enemy_num[cir] = cir + 1;
			}
			return 8.6;
		}
	}
	return 0;

}
double straight_flush(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int a, cir = 0;
	if (sum % 5 == 0) {
		a = sum / 5;
		if (a > 2) {
			if (*(spade + a - 1) == a && *(spade + a) == a + 1 && *(spade + a + 1) == a + 2 && *(spade + a - 2) == a - 1 && *(spade + a - 3) == a - 2) {
				printf("<♠%d ♠%d ♠%d ♠%d ♠%d> 스트레이트 플러쉬\n", a - 2, a - 1, a, a + 1, a + 2);
				for (; cir < 5; cir++) {
					enemy_shape[cir] = 'S';
					enemy_num[cir] = a - (2 - cir);
				}
				return 8 + (float)(a + 2) / 100;
			}
			else if (*(dia + a - 1) == a && *(dia + a) == a + 1 && *(dia + a + 1) == a + 2 && *(dia + a - 2) == a - 1 && *(dia + a - 3) == a - 2) {
				printf("<◆%d ◆%d ◆%d ◆%d ◆%d> 스트레이트 플러쉬\n", a - 2, a - 1, a, a + 1, a + 2);
				for (; cir < 5; cir++) {
					enemy_shape[cir] = 'D';
					enemy_num[cir] = a - (2 - cir);
				}
				return 8 + (float)(a + 2) / 100;
			}
			else if (*(heart + a - 1) == a && *(heart + a) == a + 1 && *(heart + a + 1) == a + 2 && *(heart + a - 2) == a - 1 && *(heart + a - 3) == a - 2) {
				printf("<♥%d ♥%d ♥%d ♥%d ♥%d> 스트레이트 플러쉬\n", a - 2, a - 1, a, a + 1, a + 2);
				for (; cir < 5; cir++) {
					enemy_shape[cir] = 'H';
					enemy_num[cir] = a - (2 - cir);
				}
				return 8 + (float)(a + 2) / 100;
			}
			else if (*(clover + a - 1) == a && *(clover + a) == a + 1 && *(clover + a + 1) == a + 2 && *(clover + a - 2) == a - 1 && *(clover + a - 3) == a - 2) {
				printf("<♣%d ♣%d ♣%d ♣%d ♣%d> 스트레이트 플러쉬\n", a - 2, a - 1, a, a + 1, a + 2);
				for (; cir < 5; cir++) {
					enemy_shape[cir] = 'C';
					enemy_num[cir] = a - (2 - cir);
				}
				return 8 + (float)(a + 2) / 100;
			}
		}
	}
	return 0;
}
double four_card(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int cir, a, cir2=0;
	a = sum / 4;
	for (cir = 0; sum - a * 4 <= 13, a > 0; cir++, a -= 1) {
		while (sum - a * 4 <= 0) {
			a--;
		}
		if (a != sum - 4 * a) {
			if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&sum - a * 4 != a) {
				if (*(spade + sum - a * 4 - 1) == sum - a * 4) {
					printf("♠%d ◆%d ♥%d ♣%d ♠%d 포카드\n", a, a, a, a, sum - a * 4);
					enemy_shape[0] = 'S';
					enemy_shape[1] = 'D';
					enemy_shape[2] = 'H';
					enemy_shape[3] = 'C';
					enemy_shape[4] = 'S';
					enemy_num[0] = a;
					enemy_num[1] = a;
					enemy_num[2] = a;
					enemy_num[3] = a;
					enemy_num[4] = sum - a * 4;
					return 7 + (float)a / 100 + (float)(sum - a * 4) / 10000;
				}
				else if (*(dia + sum - a * 4 - 1) == sum - a * 4) {
					printf("♠%d ◆%d ♥%d ♣%d ◆%d 포카드\n", a, a, a, a, sum - a * 4);
					enemy_shape[0] = 'S';
					enemy_shape[1] = 'D';
					enemy_shape[2] = 'H';
					enemy_shape[3] = 'C';
					enemy_shape[4] = 'D';
					enemy_num[0] = a;
					enemy_num[1] = a;
					enemy_num[2] = a;
					enemy_num[3] = a;
					enemy_num[4] = sum - a * 4;
					if(a==1)
					return 7.5 + (float)a / 100 + (float)(sum - a * 4) / 10000;
					else if (sum-a*4==1)
						return 7.005 + (float)a / 100 + (float)(sum - a * 4) / 10000;
					else
						return 7 + (float)a / 100 + (float)(sum - a * 4) / 10000;
				}
				else if (*(heart + sum - a * 4 - 1) == sum - a * 4) {
					printf("♠%d ◆%d ♥%d ♣%d ♥%d 포카드\n", a, a, a, a, sum - a * 4);
					enemy_shape[0] = 'S';
					enemy_shape[1] = 'D';
					enemy_shape[2] = 'H';
					enemy_shape[3] = 'C';
					enemy_shape[4] = 'H';
					enemy_num[0] = a;
					enemy_num[1] = a;
					enemy_num[2] = a;
					enemy_num[3] = a;
					enemy_num[4] = sum - a * 4;
					if (a == 1)
						return 7.5 + (float)a / 100 + (float)(sum - a * 4) / 10000;
					else if (sum - a * 4 == 1)
						return 7.005 + (float)a / 100 + (float)(sum - a * 4) / 10000;
					else
						return 7 + (float)a / 100 + (float)(sum - a * 4) / 10000;
				}
				else if (*(clover + sum - a * 4 - 1) == sum - a * 4) {
					printf("♠%d ◆%d ♥%d ♣%d ♣%d 포카드\n", a, a, a, a, sum - a * 4);
					enemy_shape[0] = 'S';
					enemy_shape[1] = 'D';
					enemy_shape[2] = 'H';
					enemy_shape[3] = 'C';
					enemy_shape[4] = 'C';
					enemy_num[0] = a;
					enemy_num[1] = a;
					enemy_num[2] = a;
					enemy_num[3] = a;
					enemy_num[4] = sum - a * 4;
					if (a == 1)
						return 7.5 + (float)a / 100 + (float)(sum - a * 4) / 10000;
					else if (sum - a * 4 == 1)
						return 7.005 + (float)a / 100 + (float)(sum - a * 4) / 10000;
					else
						return 7 + (float)a / 100 + (float)(sum - a * 4) / 10000;
				}
			}
		}
	}
	return 0;
}
double full_house(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int a, b, cir2 = 0;
	for (a = sum / 3; a > 13; a--);
	for (; a >= 1; a--) {
		b = (sum - 3 * a) / 2;
		if (a != b) {
		if (sum == a * 3 + b * 2) {
			if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(spade + b - 1) == b&&*(dia + b - 1) == b) {
				printf("♠%d ◆%d ♥%d ♠%d ◆%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'H';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'D';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a==1)
				return 6.5 + (float)a / 100 + (float)b / 10000;
				else if(b==1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(spade + b - 1) == b&&*(heart + b - 1) == b) {
				printf("♠%d ◆%d ♥%d ♠%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'H';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(spade + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ◆%d ♥%d ♠%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'H';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(dia + b - 1) == b&&*(heart + b - 1) == b) {
				printf("♠%d ◆%d ♥%d ◆%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'H';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(dia + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ◆%d ♥%d ◆%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'H';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(heart + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ◆%d ♥%d ♥%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'H';
				enemy_shape[3] = 'H';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(dia + b - 1) == b) {
				printf("♠%d ◆%d ♣%d ♠%d ◆%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'D';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(heart + b - 1) == b) {
				printf("♠%d ◆%d ♣%d ♠%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ◆%d ♣%d ♠%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(clover + a - 1) == a&&*(dia + b - 1) == b&&*(heart + b - 1) == b) {
				printf("♠%d ◆%d ♣%d ◆%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(clover + a - 1) == a&&*(dia + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ◆%d ♣%d ◆%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(clover + a - 1) == a&&*(heart + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ◆%d ♣%d ♥%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'D';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'H';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(dia + b - 1) == b) {
				printf("♠%d ♥%d ♣%d ♠%d ◆%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'D';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(heart + b - 1) == b) {
				printf("♠%d ♥%d ♣%d ♠%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ♥%d ♣%d ♠%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(dia + b - 1) == b&&*(heart + b - 1) == b) {
				printf("♠%d ♥%d ♣%d ◆%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(dia + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ♥%d ♣%d ◆%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(spade + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(heart + b - 1) == b&&*(clover + b - 1) == b) {
				printf("♠%d ♥%d ♣%d ♥%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'S';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'H';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(dia + b - 1) == b) {
				printf("◆%d ♥%d ♣%d ♠%d ◆%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'D';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'D';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(heart + b - 1) == b) {
				printf("◆%d ♥%d ♣%d ♠%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'D';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(spade + b - 1) == b&&*(clover + b - 1) == b) {
				printf("◆%d ♥%d ♣%d ♠%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'D';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'S';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(dia + b - 1) == b&&*(heart + b - 1) == b) {
				printf("◆%d ♥%d ♣%d ◆%d ♥%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'D';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'H';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(dia + b - 1) == b&&*(clover + b - 1) == b) {
				printf("◆%d ♥%d ♣%d ◆%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'D';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'D';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
			else if (*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a&&*(heart + b - 1) == b&&*(clover + b - 1) == b) {
				printf("◆%d ♥%d ♣%d ♥%d ♣%d 풀 하우스\n", a, a, a, b, b);
				enemy_shape[0] = 'D';
				enemy_shape[1] = 'H';
				enemy_shape[2] = 'C';
				enemy_shape[3] = 'H';
				enemy_shape[4] = 'C';
				for (; cir2 < 3; cir2++)
					enemy_num[cir2] = a;
				enemy_num[3] = b;
				enemy_num[4] = b;
				if (a == 1)
					return 6.5 + (float)a / 100 + (float)b / 10000;
				else if (b == 1)
					return 6.005 + (float)a / 100 + (float)b / 10000;
				else
					return 6 + (float)a / 100 + (float)b / 10000;
			}
		}
		}
	}
	return 0;
}
double flush(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int cir, cir2, cir3, cir4, cir5, cir6;
	for (cir = 0; cir <= 9; cir++) {
		for (cir2 = 1; cir + cir2 <= 10; cir2++) {
			for (cir3 = 1; cir + cir2 + cir3 <= 11; cir3++) {
				for (cir4 = 1; cir + cir2 + cir3 + cir4 <= 12; cir4++) {
					for (cir5 = 1; cir + cir2 + cir3 + cir4 + cir5 <= 13; cir5++) {
						if (*(spade + cir) + *(spade + cir + cir2) + *(spade + cir + cir2 + cir3) + *(spade + cir + cir2 + cir3 + cir4) + *(spade + cir + cir2 + cir3 + cir4 + cir5) == sum&&*(spade + cir) != 0 && *(spade + cir + cir2) != 0 && *(spade + cir + cir2 + cir3) != 0 && *(spade + cir + cir2 + cir3 + cir4) != 0 && *(spade + cir + cir2 + cir3 + cir4 + cir5) != 0) {
							printf("♠%d ♠%d ♠%d ♠%d ♠%d 플러쉬\n", *(spade + cir), *(spade + cir + cir2), *(spade + cir + cir2 + cir3), *(spade + cir + cir2 + cir3 + cir4), *(spade + cir + cir2 + cir3 + cir4 + cir5));
							for (cir6 = 0; cir6 < 5; cir6++) {
								enemy_shape[cir6] = 'S';
							}
							enemy_num[0] = *(spade + cir);
							enemy_num[1] = *(spade + cir + cir2);
							enemy_num[2] = *(spade + cir + cir2 + cir3);
							enemy_num[3] = *(spade + cir + cir2 + cir3 + cir4);
							enemy_num[4] = *(spade + cir + cir2 + cir3 + cir4 + cir5);
							if (*(spade+cir)==1)
							return 5.5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
							else
								return 5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
						}
						else if (*(dia + cir) + *(dia + cir + cir2) + *(dia + cir + cir2 + cir3) + *(dia + cir + cir2 + cir3 + cir4) + *(dia + cir + cir2 + cir3 + cir4 + cir5) == sum&&*(dia + cir) != 0 && *(dia + cir + cir2) != 0 && *(dia + cir + cir2 + cir3) != 0 && *(dia + cir + cir2 + cir3 + cir4) != 0 && *(dia + cir + cir2 + cir3 + cir4 + cir5) != 0) {
							printf("◆%d ◆%d ◆%d ◆%d ◆%d 플러쉬\n", *(dia + cir), *(dia + cir + cir2), *(dia + cir + cir2 + cir3), *(dia + cir + cir2 + cir3 + cir4), *(dia + cir + cir2 + cir3 + cir4 + cir5));
							for (cir6 = 0; cir6 < 5; cir6++) {
								enemy_shape[cir6] = 'D';
							}
							enemy_num[0] = *(dia + cir);
							enemy_num[1] = *(dia + cir + cir2);
							enemy_num[2] = *(dia + cir + cir2 + cir3);
							enemy_num[3] = *(dia + cir + cir2 + cir3 + cir4);
							enemy_num[4] = *(dia + cir + cir2 + cir3 + cir4 + cir5);
							if (*(dia + cir) == 1)
								return 5.5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
							else
								return 5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
						}
						else if (*(heart + cir) + *(heart + cir + cir2) + *(heart + cir + cir2 + cir3) + *(heart + cir + cir2 + cir3 + cir4) + *(heart + cir + cir2 + cir3 + cir4 + cir5) == sum&&*(heart + cir) != 0 && *(heart + cir + cir2) != 0 && *(heart + cir + cir2 + cir3) != 0 && *(heart + cir + cir2 + cir3 + cir4) != 0 && *(heart + cir + cir2 + cir3 + cir4 + cir5) != 0) {
							printf("♥%d ♥%d ♥%d ♥%d ♥%d 플러쉬\n", *(heart + cir), *(heart + cir + cir2), *(heart + cir + cir2 + cir3), *(heart + cir + cir2 + cir3 + cir4), *(heart + cir + cir2 + cir3 + cir4 + cir5));
							for (cir6 = 0; cir6 < 5; cir6++) {
								enemy_shape[cir6] = 'H';
							}
							enemy_num[0] = *(heart + cir);
							enemy_num[1] = *(heart + cir + cir2);
							enemy_num[2] = *(heart + cir + cir2 + cir3);
							enemy_num[3] = *(heart + cir + cir2 + cir3 + cir4);
							enemy_num[4] = *(heart + cir + cir2 + cir3 + cir4 + cir5);
							if (*(heart + cir) == 1)
								return 5.5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
							else
								return 5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
						}
						else if (*(clover + cir) + *(clover + cir + cir2) + *(clover + cir + cir2 + cir3) + *(clover + cir + cir2 + cir3 + cir4) + *(clover + cir + cir2 + cir3 + cir4 + cir5) == sum&&*(clover + cir) != 0 && *(clover + cir + cir2) != 0 && *(clover + cir + cir2 + cir3) != 0 && *(clover + cir + cir2 + cir3 + cir4) != 0 && *(clover + cir + cir2 + cir3 + cir4 + cir5) != 0) {
							printf("♣%d ♣%d ♣%d ♣%d ♣%d 플러쉬\n", *(clover + cir), *(clover + cir + cir2), *(clover + cir + cir2 + cir3), *(clover + cir + cir2 + cir3 + cir4), *(clover + cir + cir2 + cir3 + cir4 + cir5));
							for (cir6 = 0; cir6 < 5; cir6++) {
								enemy_shape[cir6] = 'C';
							}
							enemy_num[0] = *(clover + cir);
							enemy_num[1] = *(clover + cir + cir2);
							enemy_num[2] = *(clover + cir + cir2 + cir3);
							enemy_num[3] = *(clover + cir + cir2 + cir3 + cir4);
							enemy_num[4] = *(clover + cir + cir2 + cir3 + cir4 + cir5);
							if (*(clover + cir) == 1)
								return 5.5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
							else
								return 5 + (float)(cir + cir2 + cir3 + cir4 + cir5 + 1) / 100 + (float)(cir + cir2 + cir3 + cir4 + 1) / 10000 + (float)(cir + cir2 + cir3 + 1) / 1000000 + (float)(cir + cir2 + 1) / 10000000 + (float)(cir + 1) / 10000000000;
						}
					}
				}
			}
		}
	}
	return 0;
}

/*float mountain_straight(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int a,cir,b=0;
	if (sum == 47) {
		for (cir = 9; cir < 13; cir++) {
			if (spade[cir] == cir + 1) {
				b += 1;
			}
			else if (dia[cir] == cir + 1) {
				b += 1;
			}
			else if (heart[cir] == cir + 1) {
				b += 1;
			}
			else if (clover[cir] == cir + 1) {
				b += 1;
			}
		}
		if (spade[0] == 1) {
			b += 1;
		}
		else if (dia[0] == 1) {
			b += 1;
		}
		else if (heart[0] == 1) {
			b += 1;
		}
		else if (clover[0] == 1) {
			b += 1;
		}
		if (b == 5) {
			for (cir = 9; cir < 13; cir++) {
				if (spade[cir] == cir + 1) {
					printf("♠%d ", cir + 1);
					enemy_shape[cir - 9] = 'S';
					enemy_num[cir - 9] = cir + 1;
				}
				else if (dia[cir] == cir + 1) {
					printf("◆%d ", cir + 1);
					enemy_shape[cir - 9] = 'D';
					enemy_num[cir - 9] = cir + 1;
				}
				else if (heart[cir] == cir + 1) {
					printf("♥%d ", cir + 1);
					enemy_shape[cir - 9] = 'H';
					enemy_num[cir - 9] = cir + 1;
				}
				else if (clover[cir] == cir + 1) {
					printf("♣%d ", cir + 1);
					enemy_shape[cir - 9] = 'C';
					enemy_num[cir - 9] = cir + 1;
				}
			}
			if (spade[0] == 1) {
				printf("♠A 마운틴 스트레이트\n");
				enemy_shape[4] = 'S';
				enemy_num[4] = 1;
				return 4.8;
			}
			else if (dia[0] == 1) {
				printf("◆A 마운틴 스트레이트\n");
				enemy_shape[4] = 'D';
				enemy_num[4] = 1;
				return 4.8;
			}
			else if (heart[0] == 1) {
				printf("♥A 마운틴 스트레이트\n");
				enemy_shape[4] = 'H';
				enemy_num[4] = 1;
				return 4.8;
			}
			else if (clover[0] == 1) {
				printf("♣A 마운틴 스트레이트\n");
				enemy_shape[4] = 'C';
				enemy_num[4] = 1;
				return 4.8;
			}
		}
	}
}*/

double back_straight(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int  a = 0, cir;
	if (sum == 15) {
		for (cir = 0; cir < 5; cir++) {
			if (*(spade + cir) == cir + 1) {
				a += 1;
			}
			else if (*(dia + cir) == cir + 1) {
				a += 1;
			}
			else if (*(heart + cir) == cir + 1) {
				a += 1;
			}
			else if (*(clover + cir) == cir + 1) {
				a += 1;
			}
		}
		if (a == 5) {
			for (cir = 0; cir < 5; cir++) {
				if (*(spade + cir) == cir + 1) {
					if (cir == 0)
						printf("♠A ");
					else
						printf("♠%d ", cir + 1);
					enemy_shape[cir] = 'S';
					enemy_num[cir] = cir + 1;
				}
				else if (*(dia + cir) == cir + 1) {
					if (cir == 0)
						printf("◆A ");
					else
						printf("◆%d ", cir + 1);
					enemy_shape[cir] = 'D';
					enemy_num[cir] = cir + 1;
				}
				else if (*(heart + cir) == cir + 1) {
					if (cir == 0)
						printf("♥A ");
					else
						printf("♥%d ", cir + 1);
					enemy_shape[cir] = 'H';
					enemy_num[cir] = cir + 1;
				}
				else if (*(clover + cir) == cir + 1) {
					if (cir == 0)
						printf("♣A ");
					else
						printf("♣%d ", cir + 1);
					enemy_shape[cir] = 'C';
					enemy_num[cir] = cir + 1;
				}
			}
			printf("백 스트레이트\n");
			return 4.5;
		}
	}
	return 0;
}
double straight(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int a, b, cir;
	if (sum % 5 == 0&&sum<=55) {
		a = sum / 5;
		if (a > 2) {
			for (cir = -3, b = 0; cir < 2; cir++) {
				if (*(spade + a + cir) == a + cir + 1)
					b += 1;
				else if (*(dia + a + cir) == a + cir + 1)
					b += 1;
				else if (*(heart + a + cir) == a + cir + 1)
					b += 1;
				else if (*(clover + a + cir) == a + cir + 1)
					b += 1;
			}
			if (b == 5) {
				for (cir = -3, b = 0; cir < 2; cir++) {
					if (*(spade + a + cir) == a + cir + 1) {
						printf("♠%d ", a + cir + 1);
						enemy_shape[cir + 3] = 'S';
						enemy_num[cir + 3] = a + cir + 1;
					}
					else if (*(dia + a + cir) == a + cir + 1) {
						printf("◆%d ", a + cir + 1);
						enemy_shape[cir + 3] = 'D';
						enemy_num[cir + 3] = a + cir + 1;
					}
					else if (*(heart + a + cir) == a + cir + 1) {
						printf("♥%d ", a + cir + 1);
						enemy_shape[cir + 3] = 'H';
						enemy_num[cir + 3] = a + cir + 1;
					}
					else if (*(clover + a + cir) == a + cir + 1) {
						printf("♣%d ", a + cir + 1);
						enemy_shape[cir + 3] = 'C';
						enemy_num[cir + 3] = a + cir + 1;
					}
				}
				printf("스트레이트\n");
				return 4 + (float)(a + cir) / 100;

			}
		}
	}
	return 0;
}
double triple(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int a, b, c, d = 0, e = 0,g=0,cir=0;
	a = sum / 3;
	for (; a > 13; a--) {
	}
	b = (sum - a * 3) / 2;
	g = b;
	for (; a > 0; a--) {
		if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(heart + a - 1) == a) {
			for (b=g; b <= 13, (sum - a * 3 - b) <= 13, b > 0, (sum - a * 3 - b) > 0,cir<7;cir++, b--) {
				d = 0, e = 0;
				c = (sum - a * 3 - b);
				if (a != b&&b != c) {
						if (c > b) {
							c = c + b;
							b = c - b;
							c = c - b;
						}
						if (*(spade + b - 1) == b) {
							d += 1;
						}
						else if (*(dia + b - 1) == b) {
							d += 1;
						}
						else if (*(heart + b - 1) == b) {
							d += 1;
						}
						else if (*(clover + b - 1) == b) {
							d += 1;
						}
						if (*(spade + c - 1) == c) {
							e += 1;
						}
						else if (*(dia + c - 1) == c) {
							e += 1;
						}
						else if (*(heart + c - 1) == c) {
							e += 1;
						}
						else if (*(clover + c - 1) == c) {
							e += 1;
						}
						if (d == 1 && e == 1) {
							printf("♠%d ◆%d ♥%d ", a, a, a);
							enemy_shape[0] = 'S';
							enemy_shape[1] = 'D';
							enemy_shape[2] = 'H';
							for (cir = 0; cir < 3; cir++) {
								enemy_num[cir] = a;
							}
							if (*(spade + b - 1) == b) {
								printf("♠%d ", b);
								d--;
								enemy_shape[3] = 'S';
								enemy_num[3] = b;
							}
							else if (*(dia + b - 1) == b) {
								printf("◆%d ", b);
								d--;
								enemy_shape[3] = 'D';
								enemy_num[3] = b;
							}
							else if (*(heart + b - 1) == b) {
								printf("♥%d ", b);
								d--;
								enemy_shape[3] = 'H';
								enemy_num[3] = b;
							}
							else if (*(clover + b - 1) == b) {
								printf("♣%d ", b);
								d--;
								enemy_shape[3] = 'C';
								enemy_num[3] = b;
							}
							if (*(spade + c - 1) == c) {
								printf("♠%d 트리플\n", c);
								enemy_shape[4] = 'S';
								enemy_num[4] = c;
								if (a==1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
								else if (c==1)
									return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							}
							else if (*(+dia + c - 1) == c) {
								printf("◆%d 트리플\n", c);
								enemy_shape[4] = 'D';
								enemy_num[4] = c;
								if (a == 1)
									return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
								else if (c == 1)
									return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							}
							else if (*(heart + c - 1) == c) {
								printf("♥%d 트리플\n", c);
								enemy_shape[4] = 'H';
								enemy_num[4] = c;
								if (a == 1)
									return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
								else if (c == 1)
									return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							}
							else if (*(clover + c - 1) == c) {
								printf("♣%d 트리플\n", c);
								enemy_shape[4] = 'C';
								enemy_num[4] = c;
								if (a == 1)
									return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
								else if (c == 1)
									return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							}
						}
					}
				}
			}
		else if (*(spade + a - 1) == a&&*(dia + a - 1) == a&&*(clover + a - 1) == a) {
			for (b=g; b <= 13, (sum - a * 3 - b) <= 13, b > 0, (sum - a * 3 - b) > 0,cir<7; b--,cir++) {
				d = 0, e = 0;
				c = (sum - a * 3 - b);
				if (a!=b&&b != c) {
					if (c > b) {
						c = c + b;
						b = c - b;
						c = c - b;
					}
					if (*(spade + b - 1) == b) {
						d += 1;
					}
					else if (*(dia + b - 1) == b) {
						d += 1;
					}
					else if (*(heart + b - 1) == b) {
						d += 1;
					}
					else if (*(clover + b - 1) == b) {
						d += 1;
					}
					if (*(spade + c - 1) == c) {
						e += 1;
					}
					else if (*(dia + c - 1) == c) {
						e += 1;
					}
					else if (*(heart + c - 1) == c) {
						e += 1;
					}
					else if (*(clover + c - 1) == c) {
						e += 1;
					}
					if (d == 1 && e == 1) {
						printf("♠%d ◆%d ♣%d ", a, a, a);
						enemy_shape[0] = 'S';
						enemy_shape[1] = 'D';
						enemy_shape[2] = 'H';
						for (cir = 0; cir < 3; cir++) {
							enemy_num[cir] = a;
						}
						if (*(spade + b - 1) == b) {
							printf("♠%d ", b);
							enemy_shape[3] = 'S';
							enemy_num[3] = b;
							d--;
						}
						else if (*(dia + b - 1) == b) {
							printf("◆%d ", b);
							enemy_shape[3] = 'D';
							enemy_num[3] = b;
							d--;
						}
						else if (*(heart + b - 1) == b) {
							printf("♥%d ", b);
							enemy_shape[3] = 'H';
							enemy_num[3] = b;
							d--;
						}
						else if (*(clover + b - 1) == b) {
							printf("♣%d ", b);
							enemy_shape[3] = 'C';
							enemy_num[3] = b;
							d--;
						}
						if (*(spade + c - 1) == c) {
							printf("♠%d 트리플\n", c);
							enemy_shape[4] = 'S';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(+dia + c - 1) == c) {
							printf("◆%d 트리플\n", c);
							enemy_shape[4] = 'D';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(heart + c - 1) == c) {
							printf("♥%d 트리플\n", c);
							enemy_shape[4] = 'H';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(clover + c - 1) == c) {
							printf("♣%d 트리플\n", c);
							enemy_shape[4] = 'C';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
					}
				}
			}
		}
		else if (*(spade + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a) {
			for (b=g; b <= 13, (sum - a * 3 - b) <= 13, b > 0, (sum - a * 3 - b) > 0,cir<7; cir++,b--) {
				d = 0, e = 0;
				c = (sum - a * 3 - b);
				if (a != b&&b != c) {
					if (c > b) {
						c = c + b;
						b = c - b;
						c = c - b;
					}
					if (*(spade + b - 1) == b) {
						d += 1;
					}
					else if (*(dia + b - 1) == b) {
						d += 1;
					}
					else if (*(heart + b - 1) == b) {
						d += 1;
					}
					else if (*(clover + b - 1) == b) {
						d += 1;
					}
					if (*(spade + c - 1) == c) {
						e += 1;
					}
					else if (*(dia + c - 1) == c) {
						e += 1;
					}
					else if (*(heart + c - 1) == c) {
						e += 1;
					}
					else if (*(clover + c - 1) == c) {
						e += 1;
					}
					if (d == 1 && e == 1) {
						printf("♠%d ♥%d ♣%d ", a, a, a);
						enemy_shape[0] = 'S';
						enemy_shape[1] = 'D';
						enemy_shape[2] = 'H';
						for (cir = 0; cir < 3; cir++) {
							enemy_num[cir] = a;
						}
						if (*(spade + b - 1) == b) {
							printf("♠%d ", b);
							d--;
							enemy_shape[3] = 'S';
							enemy_num[3] = b;
						}
						else if (*(dia + b - 1) == b) {
							printf("◆%d ", b);
							d--;
							enemy_shape[3] = 'D';
							enemy_num[3] = b;
						}
						else if (*(heart + b - 1) == b) {
							printf("♥%d ", b);
							d--;
							enemy_shape[3] = 'H';
							enemy_num[3] = b;
						}
						else if (*(clover + b - 1) == b) {
							printf("♣%d ", b);
							d--;
							enemy_shape[3] = 'C';
							enemy_num[3] = b;
						}
						if (*(spade + c - 1) == c) {
							printf("♠%d 트리플\n", c);
							enemy_shape[4] = 'S';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(+dia + c - 1) == c) {
							printf("◆%d 트리플\n", c);
							enemy_shape[4] = 'D';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(heart + c - 1) == c) {
							printf("♥%d 트리플\n", c);
							enemy_shape[4] = 'H';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(clover + c - 1) == c) {
							printf("♣%d 트리플\n", c);
							enemy_shape[4] = 'C';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
					}
				}
			}
		}
		else if (*(dia + a - 1) == a&&*(heart + a - 1) == a&&*(clover + a - 1) == a) {
			for (b=g; b <= 13, (sum - a * 3 - b) <= 13, b > 0, (sum - a * 3 - b) > 0,cir<7; b--,cir++) {
				d = 0, e = 0;
				c = (sum - a * 3 - b);
				if (a != b&&b != c) {
					if (c > b) {
						c = c + b;
						b = c - b;
						c = c - b;
					}
					if (*(spade + b - 1) == b) {
						d += 1;
					}
					else if (*(dia + b - 1) == b) {
						d += 1;
					}
					else if (*(heart + b - 1) == b) {
						d += 1;
					}
					else if (*(clover + b - 1) == b) {
						d += 1;
					}
					if (*(spade + c - 1) == c) {
						e += 1;
					}
					else if (*(dia + c - 1) == c) {
						e += 1;
					}
					else if (*(heart + c - 1) == c) {
						e += 1;
					}
					else if (*(clover + c - 1) == c) {
						e += 1;
					}
					if (d == 1 && e == 1) {
						printf("◆%d ♥%d ♣%d ", a, a, a);
						enemy_shape[0] = 'S';
						enemy_shape[1] = 'D';
						enemy_shape[2] = 'H';
						for (cir = 0; cir < 3; cir++) {
							enemy_num[cir] = a;
						}
						if (*(spade + b - 1) == b) {
							printf("♠%d ", b);
							d--;
							enemy_shape[3] = 'S';
							enemy_num[3] = b;
						}
						else if (*(dia + b - 1) == b) {
							printf("◆%d ", b);
							d--;
							enemy_shape[3] = 'D';
							enemy_num[3] = b;
						}
						else if (*(heart + b - 1) == b) {
							printf("♥%d ", b);
							d--;
							enemy_shape[3] = 'H';
							enemy_num[3] = b;
						}
						else if (*(clover + b - 1) == b) {
							printf("♣%d ", b);
							d--;
							enemy_shape[3] = 'C';
							enemy_num[3] = b;
						}
						if (*(spade + c - 1) == c) {
							printf("♠%d 트리플\n", c);
							enemy_shape[4] = 'S';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(+dia + c - 1) == c) {
							printf("◆%d 트리플\n", c);
							enemy_shape[4] = 'D';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(heart + c - 1) == c) {
							printf("♥%d 트리플\n", c);
							enemy_shape[4] = 'H';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
						else if (*(clover + c - 1) == c) {
							printf("♣%d 트리플\n", c);
							enemy_shape[4] = 'C';
							enemy_num[4] = c;
							if (a == 1)
								return 3.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
							else if (c == 1)
								return 3.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
						}
					}
				}
			}
		}
	}
	return 0;
}
double two_pair(int* spade, int*  dia, int*  heart, int*  clover, int sum, char* enemy_shape, int* enemy_num) {
	int a, b, c, d, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, vals = 0, vald = 0, valh = 0, valc = 0;
	a = sum / 2;
	for (; a > 13; a--);
	for (; a > 0; a--) {
		b = (sum - 2 * a) / 2;
		if (b <= 0) {
			a--;
			b = (sum - 2 * a) / 2;
		}
		d = b;
		f = 0;
		if (*(spade + a - 1) == a)
			e += 1;
		if (*(dia + a - 1) == a)
			e += 10;
		if (*(heart + a - 1) == a)
			e += 100;
		if (*(clover + a - 1) == a)
			e += 1000;
		g = e;
		if (e % 10 == 1) {
			e -= 1;
			f++;
		}
		if (e % 100 == 10) {
			e -= 10;
			f++;
		}
		if (e % 1000 == 100) {
			e -= 100;
			f++;
		}
		if (e % 10000 == 1000) {
			e -= 1000;
			f++;
		}
		if (f >= 2) {
			for (b = d; b > 0; b--) {
				if (sum - 2 * (a + b) <= 13 && sum - 2 * (a + b) > 0) {
					c = sum - 2 * (a + b);
					i = 0;
					if (*(spade + b - 1) == b)
						h += 1;
					if (*(dia + b - 1) == b)
						h += 10;
					if (*(heart + b - 1) == b)
						h += 100;
					if (*(clover + b - 1) == b)
						h += 1000;
				}
				j = h;
				if (h % 10 == 1) {
					h -= 1;
					i++;
				}
				if (h % 100 == 10) {
					h -= 10;
					i++;
				}
				if (h % 1000 == 100) {
					h -= 100;
					i++;
				}
				if (h % 10000 == 1000) {
					h -= 1000;
					i++;
				}
				if (i >= 2) {
					if (*(spade + c - 1) == c) {
						vals = 1;
						break;
					}
					else if (*(dia + c - 1) == c) {
						vald = 1;
						break;
					}
					else if (*(heart + c - 1) == c) {
						valh = 1;
						break;
					}
					else if (*(clover + c - 1) == c) {
						valc = 1;
						break;
					}
				}


			}
		}
		if (vals == 1 || vald == 1 || valh == 1 || valc == 1)
			break;
	}
	if (vals == 1 || vald == 1 || valh == 1 || valc == 1) {
		f = 0, i = 0;
		if (a != b&&b != c) {
			while (1) {
				if (a < b) {
					a = a + b;
					b = a - b;
					a = a - b;
				}
				if (g % 10 == 1) {
					g -= 1;
					enemy_shape[f] = 'S';
					enemy_num[f] = a;
					f++;
					printf("♠%d ", a);
				}
				if (g % 100 == 10) {
					g -= 10;
					enemy_shape[f] = 'D';
					enemy_num[f] = a;
					f++;
					printf("◆%d ", a);
					if (f == 2)
						break;
				}
				if (g % 1000 == 100) {
					g -= 100;
					enemy_shape[f] = 'H';
					enemy_num[f] = a;
					f++;
					printf("♥%d ", a);
					if (f == 2)
						break;
				}
				if (g % 10000 == 1000) {
					g -= 1000;
					enemy_shape[f] = 'C';
					enemy_num[f] = a;
					f++;
					printf("♣%d ", a);
					if (f == 2)
						break;
				}
			}
			while (1) {
				if (j % 10 == 1) {
					j -= 1;
					enemy_shape[i + 2] = 'S';
					enemy_num[i + 2] = b;
					i++;
					printf("♠%d ", b);
				}
				if (j % 100 == 10) {
					j -= 10;
					enemy_shape[i + 2] = 'D';
					enemy_num[i + 2] = b;
					i++;
					printf("◆%d ", b);
					if (i == 2)
						break;
				}
				if (j % 1000 == 100) {
					j -= 100;
					enemy_shape[i + 2] = 'H';
					enemy_num[i + 2] = b;
					i++;
					printf("♥%d ", b);
					if (i == 2)
						break;
				}
				if (j % 10000 == 1000) {
					j -= 1000;
					enemy_shape[i + 2] = 'C';
					enemy_num[i + 2] = b;
					i++;
					printf("♣%d ", b);
					if (i == 2)
						break;
				}

			}
			if (vals == 1) {
				printf("♠%d 투페어\n", c);
				enemy_shape[4] = 'S';
				enemy_num[4] = c;
				if (b==1)
				return 2.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else if (c==1)
					return 2.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else
					return 2 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
			}
			else if (vald == 1) {
				printf("◆%d 투페어\n", c);
				enemy_shape[4] = 'D';
				enemy_num[4] = c;
				if (b == 1)
					return 2.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else if (c == 1)
					return 2.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else
					return 2 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
			}
			else if (valh == 1) {
				printf("♥%d 투페어\n", c);
				enemy_shape[4] = 'H';
				enemy_num[4] = c;
				if (b == 1)
					return 2.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else if (c == 1)
					return 2.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else
					return 2 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
			}
			else if (valc == 1) {
				printf("♣%d 투페어\n", c);
				enemy_shape[4] = 'C';
				enemy_num[4] = c;
				if (b == 1)
					return 2.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else if (c == 1)
					return 2.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
				else
					return 2 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000;
			}
		}
	}
	return 0;
}
double one_pair(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	int a, b, c, d, e, f;
	a = sum / 2;
	for (; a > 13; a--);
	for (; a >= 1; a--) {
		for (b = 13; (sum - 2 * a - b) < 3; b--) {
			if (b <= 0)
				break;
		}
		for (; b >= 1 && (sum - 2 * a - b) >= 3; b--) {
			d = (sum - 2 * a - b) / 2;
			c = (sum - 2 * a - b) - d;//c>d
			for (; d > 0, c <= 13; d--, c++) {
				f = 0;
				e = 0;
				if (*(spade + a - 1) == a)
					f += 1;
				if (*(dia + a - 1) == a)
					f += 1;
				if (*(heart + a - 1) == a)
					f += 1;
				if (*(clover + a - 1) == a)
					f += 1;
				if (f >= 2) {
					if (*(spade + b - 1) == b) {
						e += 1;
					}
					else if (*(dia + b - 1) == b) {
						e += 1;
					}
					else if (*(heart + b - 1) == b) {
						e += 1;
					}
					else if (*(clover + b - 1) == b) {
						e += 1;
					}
					if (*(spade + c - 1) == c) {
						e += 1;
					}
					else if (*(dia + c - 1) == c) {
						e += 1;
					}
					else if (*(heart + c - 1) == c) {
						e += 1;
					}
					else if (*(clover + c - 1) == c) {
						e += 1;
					}
					if (*(spade + d - 1) == d) {
						e += 1;
					}
					else if (*(dia + d - 1) == d) {
						e += 1;
					}
					else if (*(heart + d - 1) == d) {
						e += 1;
					}
					else if (*(clover + d - 1) == d) {
						e += 1;
					}
					if (e == 3) {
						f = 0;
						if (a != b&&a != c&&a != d&&b != c&&b != d&&c != d) {
							if (b < d) {
								b = b + d;
								d = b - d;
								b = b - d;
							}
							while (1) {
								if (*(spade + a - 1) == a) {
									printf("♠%d ", a);
									enemy_shape[f] = 'S';
									enemy_num[f] = a;
									f += 1;
								}
								if (*(dia + a - 1) == a) {
									printf("◆%d ", a);
									enemy_shape[f] = 'D';
									enemy_num[f] = a;
									f += 1;
									if (f == 2)
										break;
								}
								if (*(heart + a - 1) == a) {
									printf("♥%d ", a);
									enemy_shape[f] = 'H';
									enemy_num[f] = a;
									f += 1;
									if (f == 2)
										break;
								}
								if (*(clover + a - 1) == a) {
									printf("♣%d ", a);
									enemy_shape[f] = 'C';
									enemy_num[f] = a;
									f += 1;
									if (f == 2)
										break;
								}
							}
							if (spade[b - 1] == b) {
								printf("♠%d ", b);
								enemy_shape[2] = 'S';
								enemy_num[2] = b;
							}
							else if (*(dia + b - 1) == b) {
								printf("◆%d ", b);
								enemy_shape[2] = 'D';
								enemy_num[2] = b;
							}
							else if (*(heart + b - 1) == b) {
								printf("♥%d ", b);
								enemy_shape[2] = 'H';
								enemy_num[2] = b;
							}
							else if (*(clover + b - 1) == b) {
								printf("♣%d ", b);
								enemy_shape[2] = 'C';
								enemy_num[2] = b;
							}
							if (*(spade + c - 1) == c) {
								printf("♠%d ", c);
								enemy_shape[3] = 'S';
								enemy_num[3] = c;
							}
							else if (*(dia + c - 1) == c) {
								printf("◆%d ", c);
								enemy_shape[3] = 'D';
								enemy_num[3] = c;
							}
							else if (*(heart + c - 1) == c) {
								printf("♥%d ", c);
								enemy_shape[3] = 'H';
								enemy_num[3] = c;
							}
							else if (*(clover + c - 1) == c) {
								printf("♣%d ", c);
								enemy_shape[3] = 'C';
								enemy_num[3] = c;
							}
							if (*(spade + d - 1) == d) {
								printf("♠%d 원페어\n", d);
								enemy_shape[4] = 'S';
								enemy_num[4] = d;
								if (a == 1)
									return 1.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else if (d == 1)
									return 1.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else
									return 1 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
							}
							else if (*(dia + d - 1) == d) {
								printf("◆%d 원페어\n", d);
								enemy_shape[4] = 'D';
								enemy_num[4] = d;
								if (a == 1)
									return 1.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else if (d == 1)
									return 1.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else
									return 1 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
							}
							else if (*(heart + d - 1) == d) {
								printf("♥%d 원페어\n", d);
								enemy_shape[4] = 'H';
								enemy_num[4] = d;
								if (a == 1)
									return 1.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else if (d == 1)
									return 1.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else
									return 1 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
							}
							else if (*(clover + d - 1) == d) {
								printf("♣%d 원페어\n", d);
								enemy_shape[4] = 'C';
								enemy_num[4] = d;
								if (a == 1)
									return 1.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else if (d == 1)
									return 1.005 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
								else
									return 1 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
double no_pair(int* spade, int*  dia, int*  heart, int*  clover, int sum, char* enemy_shape, int* enemy_num) {
	int a = 13, b, c, d, e, A, B, C, D, E;
	if (sum >= 15) {
		if (sum - a < 10) {
			while (1) {
				a--;
				if (sum - a >= 10)
					break;
			}
		}
		for (; a >= 5; a--) {
			A = 0, b = a - 1;
			if (spade[a-1] == a) {
				A += 1;
			}
			else if (dia[a - 1] == a) {
				A += 1;
			}
			else if (heart[a - 1] == a) {
				A += 1;
			}
			else if (clover[a - 1] == a) {
				A += 1;
			}
			if (A == 1) {
				if (sum - a - b < 6) {
					while (1) {
						b--;
						if (sum - a - b >= 6)
							break;
					}
				}
				for (; b >= 4; b--) {
					B = 0;
					c = b - 1;
					if (spade[b - 1] == b) {
						B += 1;
					}
					else if (dia[b - 1] == b) {
						B += 1;
					}
					else if (heart[b - 1] == b) {
						B += 1;
					}
					else if (clover[b - 1] == b) {
						B += 1;
					}
					if (B == 1) {
						if (sum - a - b - c < 3) {
							while (1) {
								c--;
								if (sum - a - b - c >= 3)
									break;
							}
						}
						for (; c >= 3; c--) {
							C = 0;
							d = c - 1;
							if (spade[c-1] == c) {
								C += 1;
							}
							else if (dia[c - 1] == c) {
								C += 1;
							}
							else if (heart[c - 1] == c) {
								C += 1;
							}
							else if (clover[c - 1] == c) {
								C += 1;
							}
							if (C == 1) {
								if (sum - a - b - c - d < 1) {
									while (1) {
										d--;
										if (sum - a - b - c - d >= 1)
											break;
									}
								}
								for (; d >= 2; d--) {
									D = 0;
									e = d - 1;
									if (spade[d-1] == d) {
										D += 1;
									}
									else if (dia[d - 1] == d) {
										D += 1;
									}
									else if (heart[d - 1] == d) {
										D += 1;
									}
									else if (clover[d - 1] == d) {
										D += 1;
									}
									if (D == 1) {
										for (; e >= 1; e--) {
											E = 0;
											if (spade[e-1] == e) {
												E += 1;
											}
											else if (dia[e - 1] == e) {
												E += 1;
											}
											else if (heart[e - 1] == e) {
												E += 1;
											}
											else if (clover[e - 1] == e) {
												E += 1;
											}
											if (E == 1) {
												if (a + b + c + d + e == sum) {
													if (*(spade + a - 1) == a) {
														printf("♠%d ", a);
														enemy_shape[0] = 'S';
														enemy_num[0] = a;
													}
													else if (*(dia + a - 1) == a) {
														printf("◆%d ", a);
														enemy_shape[0] = 'D';
														enemy_num[0] = a;
													}
													else if (*(heart + a - 1) == a) {
														printf("♥%d ", a);
														enemy_shape[0] = 'H';
														enemy_num[0] = a;
													}
													else if (*(clover + a - 1) == a) {
														printf("♣%d ", a);
														enemy_shape[0] = 'C';
														enemy_num[0] = a;
													}
													if (*(spade + b - 1) == b) {
														printf("♠%d ", b);
														enemy_shape[1] = 'S';
														enemy_num[1] = b;
													}
													else if (*(dia + b - 1) == b) {
														printf("◆%d ", b);
														enemy_shape[1] = 'D';
														enemy_num[1] = b;
													}
													else if (*(heart + b - 1) == b) {
														printf("♥%d ", b);
														enemy_shape[1] = 'H';
														enemy_num[1] = b;
													}
													else if (*(clover + b - 1) == b) {
														printf("♣%d ", b);
														enemy_shape[1] = 'C';
														enemy_num[1] = b;
													}
													if (*(spade + c - 1) == c) {
														printf("♠%d ", c);
														enemy_shape[2] = 'S';
														enemy_num[2] = c;
													}
													else if (*(dia + c - 1) == c) {
														printf("◆%d ", c);
														enemy_shape[2] = 'D';
														enemy_num[2] = c;
													}
													else if (*(heart + c - 1) == c) {
														printf("♥%d ", c);
														enemy_shape[2] = 'H';
														enemy_num[2] = c;
													}
													else if (*(clover + c - 1) == c) {
														printf("♣%d ", c);
														enemy_shape[2] = 'C';
														enemy_num[2] = c;
													}
													if (*(spade + d - 1) == d) {
														printf("♠%d ", d);
														enemy_shape[3] = 'S';
														enemy_num[3] = d;
													}
													else if (*(dia + d - 1) == d) {
														printf("◆%d ", d);
														enemy_shape[3] = 'D';
														enemy_num[3] = d;
													}
													else if (*(heart + d - 1) == d) {
														printf("♥%d ", d);
														enemy_shape[3] = 'H';
														enemy_num[3] = d;
													}
													else if (*(clover + d - 1) == d) {
														printf("♣%d ", d);
														enemy_shape[3] = 'C';
														enemy_num[3] = d;
													}
													if (*(spade + e - 1) == e) {
														printf("♠%d 노페어\n", e);
														enemy_shape[4] = 'S';
														enemy_num[4] = e;
														if (a==1)
														return 0.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
														else
															return  (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
													}
													else if (*(dia + e - 1) == e) {
														printf("◆%d 노페어\n", e);
														enemy_shape[4] = 'D';
														enemy_num[4] = e;
														if (e == 1)
														return 0.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
													else
														return  (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
													}
													else if (*(heart + e - 1) == e) {
														printf("♥%d 노페어\n", e);
														enemy_shape[4] = 'H';
														enemy_num[4] = e;
														if (a == 1)
															return 0.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
														else
															return  (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
													}
													else if (*(clover + e - 1) == e) {
														printf("♣%d 노페어\n", e);
														enemy_shape[4] = 'C';
														enemy_num[4] = e;
														if (e == 1)
															return 0.5 + (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
														else
															return  (float)a / 100 + (float)b / 10000 + (float)c / 1000000 + (float)d / 100000000 + (float)e / 10000000000;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
int miss(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num){
	int a,b, cir=0;
	while(cir<5) {
		a = rand() % 4;
		b = rand() % 13;
		if (a == 0) {
			if (spade[b] = b + 1) {
				printf("♠%d ", b + 1);
				spade[b] = 0;
				cir++;
			}
		}
		else if (a == 1) {
			if (dia[b] = b + 1) {
				printf("◆%d ", b + 1);
				dia[b] = 0;
				cir++;
			}
		}
		else if (a == 2) {
			if (heart[b] = b + 1) {
				printf("♥%d ", b + 1);
				heart[b] = 0;
				cir++;
			}
		}
		else if (a == 3) {
			if (clover[b] = b + 1) {
				printf("♣%d ", b + 1);
				clover[b] = 0;
				cir++;
			}
		}
	}
	return -1;
}


double enemy_class(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num) {
	double a, b, c, d, e, f/*, g*/, h, i, j, k, l,m,n;
	a = royal(spade,dia, heart, clover, sum, enemy_shape, enemy_num);
	if (a != 0)
		return a;
	if (a == 0) {
		b = back_straight_flush(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (b!=0)
		return b;
	}
	if (b == 0) {
		c = straight_flush(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (c != 0)
		return c;
	}
	if (c == 0) {
		d = four_card(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (d != 0)
		return d;
	}
	if (d == 0) {
		e = full_house(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (e != 0)
		return e;
	}
	if (e == 0) {
		f = flush(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (f != 0)
		return f;
	}
/*	if (f == 0) {
		g = mountain_straight(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (g != 0)
		return g;
	}*/
	if (f == 0) {
		h = back_straight(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (h != 0)
		return h;
	}
	if (h == 0) {
		i = straight(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (i != 0)
		return i;
	}
	if (i == 0) {
		j = triple(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (j != 0)
		return j;
	}
	if (j == 0) {
		k = two_pair(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (k != 0)
		return k;
	}
	if (k == 0) {
		l = one_pair(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (l != 0)
		return l;
	}
	if (l == 0) {
		m = no_pair(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		if (m != 0)
			return m;
	}
	if (m==0) {
		n= miss(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
		printf("MISS\n");
		return n;
	}
}