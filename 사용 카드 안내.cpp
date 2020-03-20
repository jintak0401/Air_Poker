#include <stdio.h>

void if_miss(char *user_shape, int* user_num, int* user_check, int users) {
	int cir, cir2, cir3, repeat = 0;
	printf("\n");
	if (users == -2) {

		for (cir = 0; cir < 5; cir++) {

			if (user_num[cir] == 0) {
				if (user_shape[cir] == 'S') {
					printf("♠%d ", user_check[cir]);
				}
				else if (user_shape[cir] == 'D') {
					printf("◆%d ", user_check[cir]);
				}
				else if (user_shape[cir] == 'H') {
					printf("♥%d ", user_check[cir]);
				}
				else if (user_shape[cir] == 'C') {
					printf("♣%d ", user_check[cir]);
				}
			}

		}
		printf("는 이미 사용한 카드입니다.\n\n");
	}

	else if (users==-1)
		printf("카드의 합계가 맞지 않습니다.\n\n");
	else if (users==-3)
		printf("같은 카드를 중복해서 사용하셨습니다.\n\n");
}