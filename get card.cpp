#include <stdio.h>

int getcard(int* spade, int *dia, int* heart, int *clover, char* ptr2, int *ptr, int cir,int* user_check)//카드 받기
{
	int num;
	do {
		scanf("%d", &num);
		if (num < 1 || num>13)
			printf("1 과 13 사이의 숫자로 다시 입력해주세요. 문양은 입력하지 마세요.\n");
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