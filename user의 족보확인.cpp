#include <stdio.h>

double position(int*(num), int sum, char* (shape))//���� Ȯ��
{
	if (*(num) == 1 && *(num + 1) == 10 && *(num + 2) == 11 && *(num + 3) == 12 && *(num + 4) == 13 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'S') {//�����̵� ��Ƽ��
		return 9.4;
	}
	else if (*(num) == 1 && *(num + 1) == 10 && *(num + 2) == 11 && *(num + 3) == 12 && *(num + 4) == 13 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'D') {//���̾� ��Ƽ��
		return 9.3;
	}
	else if (*(num) == 1 && *(num + 1) == 10 && *(num + 2) == 11 && *(num + 3) == 12 && *(num + 4) == 13 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'H') {//��Ʈ ��Ƽ��
		return 9.2;
	}
	else if (*(num) == 1 && *(num + 1) == 10 && *(num + 2) == 11 && *(num + 3) == 12 && *(num + 4) == 13 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'C') {//Ŭ�ι� ��Ƽ��
		return 9.1;
	}
	else if (*(num) == 1 && *(num + 1) == 2 && *(num + 2) == 3 && *(num + 3) == 4 && *(num + 4) == 5 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'S') {
		return 8.9;
	}
	else if (*(num) == 1 && *(num + 1) == 2 && *(num + 2) == 3 && *(num + 3) == 4 && *(num + 4) == 5 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'D') {
		return 8.8;
	}
	else if (*(num) == 1 && *(num + 1) == 2 && *(num + 2) == 3 && *(num + 3) == 4 && *(num + 4) == 5 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'H') {
		return 8.7;
	}
	else if (*(num) == 1 && *(num + 1) == 2 && *(num + 2) == 3 && *(num + 3) == 4 && *(num + 4) == 5 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'C') {
		return 8.6;
	}
	else if (*(num) == *(num + 1) - 1 && *(num + 1) == *(num + 2) - 1 && *(num + 2) == *(num + 3) - 1 && *(num + 3) == *(num + 4) - 1 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'S') {//�����̵� ��Ƽ��
		return 8 + (float)(*(num + 4)) / 100;
	}
	else if (*(num) == *(num + 1) - 1 && *(num + 1) == *(num + 2) - 1 && *(num + 2) == *(num + 3) - 1 && *(num + 3) == *(num + 4) - 1 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'D') {//���̾� ��Ƽ��
		return 8 + (float)(*(num + 4)) / 100;
	}
	else if (*(num) == *(num + 1) - 1 && *(num + 1) == *(num + 2) - 1 && *(num + 2) == *(num + 3) - 1 && *(num + 3) == *(num + 4) - 1 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'H') {//��Ʈ ��Ƽ��
		return 8 + (float)(*(num + 4)) / 100;
	}
	else if (*(num) == *(num + 1) - 1 && *(num + 1) == *(num + 2) - 1 && *(num + 2) == *(num + 3) - 1 && *(num + 3) == *(num + 4) - 1 && *(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4) && *(shape + 4) == 'C') {//Ŭ�ι� ��Ƽ��
		return 8 + (float)(*(num + 4)) / 100;
	}
	else if (*(num) == *(num + 1) && *(num + 1) == *(num + 2) && *(num + 2) == *(num + 3) || *(num + 1) == *(num + 2) && *(num + 2) == *(num + 3) && *(num + 3) == *(num + 4)) {//��ī��
		if (*(num) == *(num + 1)) {
			if (*num == 1)
				return 7.5 + (float)*(num) / 100 + (float)*(num + 4) / 10000;
			else
				return 7 + (float)*(num) / 100 + (float)*(num + 4) / 10000;
		}
		else if (*(num + 3) == *(num + 4)) {
			if (*(num) == 1)
				return 7.005 + (float)*(num + 4) / 100 + (float)*(num) / 10000;
			else
				return 7 + (float)*(num + 4) / 100 + (float)*(num) / 10000;
		}
	}
	else if (*(num) == *(num + 1) && *(num + 1) == *(num + 2) && *(num + 3) == *(num + 4) || *(num) == *(num + 1) && *(num + 2) == *(num + 3) && *(num + 3) == *(num + 4)) {//Ǯ �Ͽ콺
		if (*(num + 1) == *(num + 2)) {
			if (*(num + 1) == 1)//Ǯ�Ͽ콺�� Ʈ���� ���ڰ� A�� ���
				return 6.5 + (float)*(num) / 100 + (float)*(num + 3) / 10000;
			else
				return 6 + (float)*(num) / 100 + (float)*(num + 3) / 10000;
		}
		else {
			if (*num == 1)//Ǯ�Ͽ콺�� ����� ���ڰ� A�� ���
				return 6.005 + (float)*(num + 2) / 100 + (float)*(num) / 10000;
			else
				return 6 + (float)*(num + 2) / 100 + (float)*(num) / 10000;
		}
	}
	else if (*(shape) == *(shape + 1) && *(shape + 1) == *(shape + 2) && *(shape + 2) == *(shape + 3) && *(shape + 3) == *(shape + 4)) {//�÷���
		if (*(num) == 1)
			return 5.5 + (float)*(num + 4) / 100 + (float)*(num + 3) / 10000 + (float)*(num + 2) / 1000000 + (float)*(num + 1) / 100000000 + (float)*(num) / 10000000000;
		else
			return 5 + (float)*(num + 4) / 100 + (float)*(num + 3) / 10000 + (float)*(num + 2) / 1000000 + (float)*(num + 1) / 100000000 + (float)*(num) / 10000000000;

	}
	else if (*(num) == 1 && num[1] == 2 && num[2] == 3 && num[3] == 4 && num[4] == 5) {
		return 4.5;
	}
	else if (*(num) == *(num + 1) - 1 && *(num + 1) == *(num + 2) - 1 && *(num + 2) == *(num + 3) - 1 && *(num + 3) == *(num + 4) - 1)//��Ʈ����Ʈ
		return 4 + (float)*(num + 4) / 100;
	else if (*(num) == *(num + 1) && *(num + 1) == *(num + 2) || *(num + 1) == *(num + 2) && *(num + 2) == *(num + 3) || *(num + 2) == *(num + 3) && *(num + 3) == *(num + 4)) {//Ʈ����
		if (*(num) == *(num + 1) && *(num + 1) == *(num + 2)) {
			if (*num == 1)
				return 3.5 + (float)*(num) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 3) / 1000000;
			else
				return 3 + (float)*(num) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 3) / 1000000;
		}
		else if (*(num + 1) == *(num + 2) && *(num + 2) == *(num + 3)) {
			if (*num == 1)
				return 3.005 + (float)*(num + 1) / 100 + (float)*(num + 4) / 10000 + (float)*(num) / 1000000;
			else
				return 3 + (float)*(num + 1) / 100 + (float)*(num + 4) / 10000 + (float)*(num) / 1000000;
		}
		else {
			if (*num == 1)
				return 3.005 + (float)*(num + 2) / 100 + (float)*(num + 1) / 10000 + (float)*(num) / 1000000;
			else
				return 3 + (float)*(num + 2) / 100 + (float)*(num + 1) / 10000 + (float)*(num) / 1000000;
		}
	}
	else if (*(num) == *(num + 1) && *(num + 2) == *(num + 3) || *(num) == *(num + 1) && *(num + 3) == *(num + 4) || *(num + 1) == *(num + 2) && *(num + 3) == *(num + 4)) {//�����
		if (*(num) == *(num + 1) && *(num + 2) == *(num + 3)) {
			if (*num == 1)
				return 2.5 + (float)*(num + 2) / 100 + (float)*(num) / 10000 + (float)*(num + 4) / 1000000;
			else
				return 2 + (float)*(num + 2) / 100 + (float)*(num) / 10000 + (float)*(num + 4) / 1000000;
		}
		else if (*(num) == *(num + 1) && *(num + 3) == *(num + 4)) {
			if (*num == 1)
				return 2.5 + (float)*(num + 3) / 100 + (float)*(num) / 10000 + (float)*(num + 2) / 1000000;
			else
				return 2 + (float)*(num + 3) / 100 + (float)*(num) / 10000 + (float)*(num + 2) / 1000000;
		}
		else {
			if (*num == 1)
				return 2.005 + (float)*(num + 4) / 100 + (float)*(num + 2) / 10000 + (float)*(num) / 1000000;
			else
				return 2 + (float)*(num + 4) / 100 + (float)*(num + 2) / 10000 + (float)*(num) / 1000000;

		}
	}
	else if (*(num) == *(num + 1) || *(num + 1) == *(num + 2) || *(num + 2) == *(num + 3) || *(num + 3) == *(num + 4)) {//�����
		if (*(num) == *(num + 1)) {
			if (*num == 1)
				return 1.5 + (float)*(num) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 3) / 1000000 + (float)*(num + 2) / 100000000;
			else
				return 1 + (float)*(num) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 3) / 1000000 + (float)*(num + 2) / 100000000;
		}
		else if (*(num + 1) == *(num + 2)) {
			if (*num == 1)
				return 1.005 + (float)*(num + 1) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 3) / 1000000 + (float)*(num) / 100000000;
			else
				return 1 + (float)*(num + 1) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 3) / 1000000 + (float)*(num) / 100000000;
		}
		else if (*(num + 2) == *(num + 3)) {
			if (*num == 1)
				return 1.005 + (float)*(num + 2) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 1) / 1000000 + (float)*(num) / 100000000;
			else
				return 1 + (float)*(num + 2) / 100 + (float)*(num + 4) / 10000 + (float)*(num + 1) / 1000000 + (float)*(num) / 100000000;
		}
		else {
			if (*num == 1)
				return 1.005 + (float)*(num + 3) / 100 + (float)*(num + 2) / 10000 + (float)*(num + 1) / 1000000 + (float)*(num) / 100000000;
			else
				return 1 + (float)*(num + 3) / 100 + (float)*(num + 2) / 10000 + (float)*(num + 1) / 1000000 + (float)*(num) / 100000000;
		}
	}
	else //�����
		if (*num == 1)
			return 0.5 + (float)*(num + 4) / 100 + (float)*(num + 3) / 10000 + (float)*(num + 2) / 1000000 + (float)*(num + 1) / 100000000 + (float)*(num) / 10000000000;
		else
			return  (float)*(num + 4) / 100 + (float)*(num + 3) / 10000 + (float)*(num + 2) / 1000000 + (float)*(num + 1) / 100000000 + (float)*(num) / 10000000000;
	}