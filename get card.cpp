#include <stdio.h>

int getcard(int* spade, int *dia, int* heart, int *clover, char* ptr2, int *ptr, int cir,int* user_check)//ī�� �ޱ�
{
	int num;
	do {
		scanf("%d", &num);
		if (num < 1 || num>13)
			printf("1 �� 13 ������ ���ڷ� �ٽ� �Է����ּ���. ������ �Է����� ������.\n");
	} while (num < 1 || num > 13);
	switch (ptr2[cir]) {
	case 'S':
		ptr[cir] = spade[num-1];
		user_check[cir] = num;
		return 1;
	case 'D':
		ptr[cir] = dia[num-1];
		user_check[cir] = num;
		return 1;
	case 'H':
		ptr[cir] = heart[num-1];
		user_check[cir] = num;
		return 1;
	case 'C':
		ptr[cir] = clover[num-1];
		user_check[cir] = num;
		return 1;
	default:
		return 0;
	}
}