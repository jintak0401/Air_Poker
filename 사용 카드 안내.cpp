#include <stdio.h>

void if_miss(char *user_shape, int* user_num, int* user_check, int users) {
	int cir, cir2, cir3, repeat = 0;
	printf("\n");
	if (users == -2) {

		for (cir = 0; cir < 5; cir++) {

			if (user_num[cir] == 0) {
				if (user_shape[cir] == 'S') {
					printf("��%d ", user_check[cir]);
				}
				else if (user_shape[cir] == 'D') {
					printf("��%d ", user_check[cir]);
				}
				else if (user_shape[cir] == 'H') {
					printf("��%d ", user_check[cir]);
				}
				else if (user_shape[cir] == 'C') {
					printf("��%d ", user_check[cir]);
				}
			}

		}
		printf("�� �̹� ����� ī���Դϴ�.\n\n");
	}

	else if (users==-1)
		printf("ī���� �հ谡 ���� �ʽ��ϴ�.\n\n");
	else if (users==-3)
		printf("���� ī�带 �ߺ��ؼ� ����ϼ̽��ϴ�.\n\n");
}