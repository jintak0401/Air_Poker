#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>


void cut(int* user, int* enemy, int* sum1, int* sum2);
double position(int*(num), int sum, char* (shape));
void if_miss(char *user_shape, int* user_num,int* user_check,int users);
int getcard(int* dia, int *heart, int* spade, int *clover, char* ptr2, int *ptr, int cir,int* user_check);
float deleting(int* spade, int* dia, int* heart, int*clover, char* user_shape, int* user_num, char* enemy_shape, int* enemy_num);
int intro();
void user_sort(int* user_num, char* user_shape,int* user_check);
int check(int* num, int* arr);
double royal(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double back_straight_flush(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double straight_flush(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double four_card(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double full_house(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double flush(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
//double mountain_straight(int* spade, int *dia, int* heart, int *clover, int sum, char* enemy_shape, int* enemy_num);
double back_straight(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double straight(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double triple(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double two_pair(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double one_pair(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double no_pair(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);
double enemy_class(int* dia, int *heart, int* spade, int *clover, int sum, char* enemy_shape, int* enemy_num);

void sort(int *ptr);
int checking_not_same(int * user, int* enemy);

void main() {
	srand(static_cast<unsigned int>(time(NULL)));

	int  round, cir, cir2, cir3, repeat = 0, get_card, user[5], enemy[5], num, checking, sum, sum1, sum2, not_same, user_num[5], enemy_num[5], user_check[5], test, user_win = 0, enemy_win = 0;
	char enemy_shape[5], user_shape[5], ans;
	double users, enemys;
/*	int spade[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int dia[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int heart[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int clover[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };*/
	intro();
	while (1) {
		int spade[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
		int dia[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
		int heart[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
		int clover[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };

		do {
			cut(&user[0], &enemy[0], &sum1, &sum2);
			not_same = checking_not_same(&user[0], &enemy[0]);
		} while (sum1 + sum2 > 362 || sum1 + sum2 < 338 || not_same == 1);
		sort(enemy);
		for (round = 0; round < 5; round++) {
			printf("�÷��̾��� ����ī�� : ");
			for (cir = 0; cir < 5 - round; cir++) {
				printf("%d ", user[cir]);
			}
			printf("\n");
			//printf("%d %d %d %d %d\n", enemy[0], enemy[1], enemy[2], enemy[3], enemy[4]);
			do {
				printf("\n����ī�带 ����ּ���\n");
				scanf("%d", &num);
				checking = check(&num, user);
			} while (checking == 1);
			getchar();
			sum = enemy[round];
			printf("\n�÷��̾��� ī�� : %d\nEnemy �� ī��   : %d\n\n", num, sum);
			for (cir = 0; cir < 5 - round; cir++) {
				if (user[cir] == num) {
					user[cir] = user[4 - round] + user[cir];
					user[4 - round] = user[cir] - user[4 - round];
					user[cir] = user[cir] - user[4 - round];
					user[4 - round] = 0;
				}
			}
			printf("ī���� ���ڿ� ���ڸ� �Է����ּ���.\n");
			for (cir = 0; cir < 5; cir++) {
				scanf(" %c", &user_shape[cir]);
				get_card = getcard(spade, dia, heart, clover, &user_shape[0], user_num, cir, user_check);
				if (get_card == 0) {
					printf("������ ���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
					cir--;
				}
				if (get_card == 1) {
					if (user_shape[cir] == 'S')
						printf("��%d\n", user_check[cir]);
					else if (user_shape[cir] == 'D')
						printf("��%d\n", user_check[cir]);
					else if (user_shape[cir] == 'H')
						printf("��%d\n", user_check[cir]);
					else if (user_shape[cir] == 'C')
						printf("��%d\n", user_check[cir]);
				}
				if (user_check[4] >= 1 && user_check[4] <= 13) {
					for (cir2 = 0; cir2 < 5; cir2++) {
						if (user_shape[cir2] == 'S')
							printf("��%d ", user_check[cir2]);
						else if (user_shape[cir2] == 'D')
							printf("��%d ", user_check[cir2]);
						else if (user_shape[cir2] == 'H')
							printf("��%d ", user_check[cir2]);
						else if (user_shape[cir2] == 'C')
							printf("��%d ", user_check[cir2]);
					}
					printf("�� �½��ϱ�? (Y/N)\n");
					scanf(" %c", &ans);
					switch (ans) {
					case 'Y':
						user_sort(user_num, user_shape, user_check);
						printf("�÷��̾� ���� : ");
						for (cir2 = 0; cir2 < 5; cir2++) {
							if (user_shape[cir2] == 'S')
								printf("��%d ", user_check[cir2]);
							else if (user_shape[cir2] == 'D')
								printf("��%d ", user_check[cir2]);
							else if (user_shape[cir2] == 'H')
								printf("��%d ", user_check[cir2]);
							else if (user_shape[cir2] == 'C')
								printf("��%d ", user_check[cir2]);
							Sleep(300);
						}
						break;
					case 'N':
						cir = -1;
						for (test = 0; test < 5; test++) {
							user_num[test] = 0;
							user_check[test] = 0;
						}
						break;
					default:
						printf("Y �Ǵ� N �� �Է����ּ���.\n");
					}

				}
			}
			for (cir2 = 0, repeat = 0; cir2 < 5; cir2++) {
				for (cir3 = 1; cir3 + cir2 < 5; cir3++) {
					if (user_shape[cir2] == user_shape[cir2 + cir3] && user_check[cir2] == user_check[cir2 + cir3]) {
						repeat = 1;
					}
				}
			}
			if (repeat == 1) {
				users = -3;
			}
			else if (user_num[0] + user_num[1] + user_num[2] + user_num[3] + user_num[4] == num)
				users = position(&user_num[0], num, &user_shape[0]);
			else if (user_check[0] + user_check[1] + user_check[2] + user_check[3] + user_check[4] == num)//�հ�� ������ ����� ī�带 ���� ��
				users = -2;
			else//���� ���� ���� ��
				users = -1;
			Sleep(1000);
			if (users >= 9)
				printf("�ξ� ��Ʈ����Ʈ �÷���\n");
			else if (users >= 8.5 && users < 9)
				printf("�� ��Ʈ����Ʈ �÷���\n");
			else if (users >= 8 && users < 8.5)
				printf("��Ʈ����Ʈ �÷���\n");
			else if (users >= 7 && users < 8)
				printf("��ī��\n");
			else if (users >= 6 && users < 7)
				printf("Ǯ �Ͽ콺\n");
			else if (users >= 5 && users < 6)
				printf("�÷���\n");
			else if (users == 4.5)
				printf("�� ��Ʈ����Ʈ\n");
			else if (users >= 4 && users < 4.5)
				printf("��Ʈ����Ʈ\n");
			else if (users >= 3 && users < 4)
				printf("Ʈ����\n");
			else if (users >= 2 && users < 3)
				printf("�����\n");
			else if (users >= 1 && users < 2)
				printf("�����\n");
			else if (users >= 0 && users < 1)
				printf("�����\n");
			else
				printf("MISS\n");
			Sleep(1000);
			printf("Enemy ���� : ");
			enemys = enemy_class(spade, dia, heart, clover, sum, enemy_shape, enemy_num);
			Sleep(1500);
			if (users < 0)
				if_miss(user_shape, user_num, user_check, users);
			Sleep(700);
			if (users > enemys) {
				printf("\n�÷��̾� ��\n");
				user_win += 1;
			}
			else if (users < enemys&&enemys >= 0) {
				printf("\nEnemy ��\n");
				enemy_win += 1;
			}
			else
				printf("\n���º�\n");
			deleting(spade, dia, heart, clover, user_shape, user_num, enemy_shape, enemy_num);

			for (test = 0; test < 5; test++) {
				user_num[test] = 0;
				user_check[test] = 0;
			}
			/*for (test = 0; test < 13; test++)
				printf("%d ", spade[test]);
			printf("\n");
			for (test = 0; test < 13; test++)
				printf("%d ", dia[test]);
			printf("\n");
			for (test = 0; test < 13; test++)
				printf("%d ", heart[test]);
			printf("\n");
			for (test = 0; test < 13; test++)
				printf("%d ", clover[test]);
			printf("\n");*/
			printf("\n���� ���� �����ϰ� �����ø� ���͸� �����ּ���\n");
			getchar();
			getchar();
			system("cls");
		}
		if (enemy_win > user_win) {
			printf("\n\n���� �� �й��ϼ���.\n\n");
			getchar();
		}
		else if (enemy_win < user_win) {
			printf("\n\n�̱�̳׿�. �����մϴ�.\n\n");
			getchar();
		}
		else {
			printf("\n\n��Ÿ���� ���׿�. �������� �̱�ñ� �ٶ��ϴ�.\n\n");
			getchar();
		}
		printf("�ٽ� �Ͻðڽ��ϱ�? (Y/N)     ");
		scanf(" %c", &ans);
		if (ans == 'N' || ans == 'n') {
			printf("����ġ�ô±���...");
			Sleep(2000);
			break;
		}
		else{
			printf("\n����� N�� �ƴϽô� �ٽ� �Ѵٴ� �ű���?");
		Sleep(2000);

		system("cls");
		}
		}
}











