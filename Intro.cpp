#include <stdio.h>
#include <windows.h>


int intro() {
	/*int a;
	char user;
	while (1) {
		printf("\n----------------------------------------------------에어포커----------------------------------------------------\n\n");
		printf("1.플레이어인 당신과 당신의 적, Enemy에게 5장의 숫자카드가 각각 분배될 것입니다.\n\n");
		printf("2.당신과 Enemy는 다섯 턴동안 시작할 때마다 5장의 숫자카드 중 한 장을 선택하여 내보입니다.\n\n");
		printf("3.당신과 Enemy는 각자 선택한 카드의 수가 합계가 되도록 트럼프 카드에서 5장을 골라 족보를 짭니다.\n\n");
		printf("4.각자 정한 족보의 순위와 Miss의 여부로 승패가 결정됩니다.\n\n");
		printf("5.스페이드(Spade)는 S, 다이아(Dia)는 D, 하트(Heart)는 H, 클로버(Clover)는 C 입니다. 꼭 대문자로 입력해주세요.\n\n");
		printf("6.<J,Q,K,A> 는 각각 <11,12,13,1>과 대응됩니다.\n\n");
		printf("7.예를 들어 스페이드 Q를 입력하고 싶을 때는 S12 라고 입력 후에 엔터를 눌러주세요.\n\n");
		printf("8.다음 턴을 진행할 때에는 그 전까지 썼던 카드들을 다시 사용할 수 없습니다.\n\n");
		printf("-----------------------------------------------------------------------------------------------------------------");
		printf("\n이해하기 힘든 설명이 있습니까? N을 입력하면 게임을 시작할 수 있습니다. (Y/N)\n\n");
		scanf("%c", &user);
		getchar();
		if (user == 'N' || user == 'n') {
			printf("그러면 게임을 시작하겠습니다.\n");
			Sleep(1500);
			system("cls");
			break;
		}
		if (user == 'Y' || user == 'y') {
			printf("몇 번이 이해가 가지 않습니까?   ");
			scanf(" %d", &a);
			printf("\n");
			if (a == 1) {
				printf("숫자 카드는 6부터 64까지 수 중 서로 다른 10개의 정수를 무작위로 나눠 가집니다.\n\n");
			}
			else if (a == 2) {
				printf("예를 들어 7 15 42 25 58 이라는 숫자가 있을 때 5장의 수 중 하나를 고릅니다.\n만약 15를 고르고 싶을 경우 숫자 15를 친 후 엔터를 누르세요.\n\n");
			}
			else if (a == 3) {
				printf("예를 들어 시작할 때 15를 골랐다면 ♠4 ◆4 ♥4 ♣4 ♠3 인 포카드를 만들 수 있습니다.\n\n");
			}
			else if (a == 4) {
				printf("족보의 순위는 \n\n모든 문양이 같고 10,J,Q,K,A인 (1)로얄 스트레이트 플러쉬 \n모든 문양이 같고 연속된 숫자인 (2)스트레이트 플러쉬 \n5장 중 4장이 같은 숫자인 (3)포카드 ");
				printf("\n5장 중 3장과 2장의 숫자가 각각 같은 (4)풀 하우스 \n5장이 모두 같은 문양인 (5)플러쉬 \n5장이 연속된 숫자인 (5)스트레이트");
				printf("\n5장 중 3장의 숫자가 같은 (6)트리플 \n5장 중 같은 숫자인 카드가 2쌍인(7)투페어 \n5장 중 2장이 같은 숫자인 (8)원페어 \n마지막으로 아무 것도 아닌 (9)노페어");
				printf(" \n\n(1)에서 (9)로 갈 수록 약한 족보입니다. 만약 노페어이지만 상대가 Miss 이면 승리합니다. \n참고로 10,J,Q,K,A 와 A,2,3,4,5 는 마운틴 스트레이트와 백 스트레이트로 그냥 스트레이트보다 강합니다.\n");
				printf("\nMiss는 \n\n<1>한 턴에 같은 카드를 중복할 경우\n<2>고른 숫자카드와 족보의 합계가 다를 경우\n<3>이미 사용한 트럼프 카드를 다시 사용할 경우\n");
				printf("\n이 세가지 경우를 Miss라고 하며 Miss 시에도 사용한 카드는 다음 턴에 사용하지 못합니다.\n");
			}
			else if (a == 5) {
				printf("대문자가 아닌 소문자로 입력하면 문양의 문자가 잘못 되었다고 합니다. 대문자로 입력해주세요.\n\n");
			}
			else if (a == 6) {
				printf("예를 들어 ♠12 라고 말하면 ♠Q 라는 뜻입니다.\n\n");
			}
			else if (a == 7) {
				printf("꼭 문자를 쓰고 숫자를 써주세요. 순서 반대로 쓰시면 안됩니다.\n\n");
			}
			else if (a == 8) {
				printf("만약 당신에게 6과 47의 숫자 카드가 있다고 해봅시다.\n");
				printf("6을 첫번째 턴에 사용할 경우 ♠1 ◆1 ♥1 ♣1 ♠2 를 사용하여 포카드를 만들었습니다.\n");
				printf("그리고 다음턴에 47을 사용하는데 47은 ♠10 ♠J ♠Q ♠K ♠A 로 로얄 스트레이트 플러쉬를 만들 수 있는 수이지만\n");
				printf("♠1을 첫 번째 턴에 사용했기 때문에 ♠J ◆J ♥J ♣J ♠3 으로 포카드를 만듭니다.\n");
				printf("반대로 첫 번째 턴에 47을 이용하여 ♠10 ♠J ♠Q ♠K ♠A 을 만들 경우\n");
				printf("첫 번째 턴에서 ♠1 을 이미 사용했기 때문에 두 번째 턴에서 ♠1 ◆1 ♥1 ♣1 ♠2 을 만들지 못하고 Miss할 수 밖에 없습니다.\n\n");
			}

			else
				printf("1 과 7 사이의 수가 아닙니다.\n\n");
		}
		getchar();
		getchar();
		system("cls");
	}*/
	int check=0,user_num[5],a,cir;
	char user_shape[5], tutor;
	while (1) {
		printf("튜토리얼을 하시겠습니까? (Y/N)\n");
		scanf(" %c", &tutor);
		if (tutor == 'Y' || tutor == 'y')
			break;
		else if (tutor == 'n' || tutor == 'N') {
			printf("게임을 시작해봅시다.\n");
			Sleep(2000);
			system("cls");
			return 0;
		}
		else
			printf("Y 나 N 중 하나로만 입력해주세요.\n\n");
	}
	printf("\n----------------------------------------------------에어포커----------------------------------------------------\n\n");
	printf("플레이어인 당신과 당신의 적, Enemy 는 서로다른 10장의 숫자카드를 각각 다섯 장씩 나눠가집니다.\n");
	getchar();
	printf("\n플레이어의 숫자카드 : 47 6 25 31 19\n\n");
	Sleep(2000);
	printf("당신에게 47 6 25 31 19 카드가 들어왔네요. 그 중 원하는 숫자 하나를 선택해야 합니다. 47을 선택해보세요.\n");
	printf("숫자 선택은 원하는 숫자를 누르고 엔터를 누르면 됩니다.\n\n");
	do {
		scanf("%d", &a);
		if (a != 47) {
			printf("47을 골라주세요\n");
		}
	} while (a != 47);
	printf("\n플레이어의 카드 : 47\nEnemy 의 카드   : 64\n\n");
	Sleep(2000);
	printf("당신은 47, Enemy 는 64를 선택했네요. 이제는 족보를 짤 차례입니다.\n");
	getchar();
	printf("족보를 짤 때에는 트럼프 카드에서 5장을 자신이 낸 숫자카드가 합계가 되도록 짭니다.\n");
	getchar();
	printf("당신이 낸 47은 1+10+11+12+13=47 이므로 ♠A ♠10 ♠J ♠Q ♠K 를 골라 로얄 스트레이트 플러쉬를 만들 수 있습니다.\n");
	getchar();
	printf("카드를 선택해 보세요. 스페이드(Spade) A는 S1 을 입력 후 엔터, 스페이드 J는 S11 입력 후 엔터를 누르면 됩니다.\n");
	printf("꼭 대문자를 입력해주세요.\n\n");
	while (check != 5) {
		for (cir = 0; cir < 5; cir++) {
			scanf(" %c", &user_shape[cir]);
			scanf("%d", &user_num[cir]);
		}
		for (cir = 0; cir < 5; cir++) {
			if (user_shape[cir] == 'S') {
				if (user_num[cir] == 10 || user_num[cir] == 13 || user_num[cir] == 12 || user_num[cir] == 11 || user_num[cir] == 1) {
					check += 1;
				}
			}
		}
		if (check != 5) {
			check = 0;
			printf("제대로 입력하지 않은 것 같습니다. 다시 입력해보세요.\n\n");
		}
	}
	check = 0;
	printf("플레이어 족보 : ♠10 ♠J ♠Q ♠K ♠A 로얄 스트레이트 플러쉬\nEnemy 족보 : ♠13 ◆13 ♥13 ♣13 ♠12 포카드\n\n");
	Sleep(2000);
	printf("플레이어 승\n\n");
	Sleep(2000);
	printf("첫 번째 턴은 당신의 승리입니다. 이제 다음 턴을 진행해보죠. 이제부터 본격적인 승부입니다.\n\n");
	getchar();
	getchar();
	system("cls");
	printf("플레이어의 숫자카드 : 6 25 31 19\n\n");
	Sleep(2000);
	printf("이번에는 6을 선택해보도록 합시다.\n\n");
	do {
		scanf(" %d", &a);
		if (a != 6) {
			printf("제대로 선택해주세요.\n\n");
		}
	} while (a != 6);
	printf("\n플레이어의 카드 : 6\nEnemy 의 카드   : 35\n\n");
	Sleep(2000);
	printf("이제 족보를 짤 차례입니다. 6은 1+1+1+1+2=6 이므로 ♠1 ◆1 ♥1 ♣1 ♠2 포카드를 짤 수 있습니다.\n");
	getchar();
	printf("다이아(Dia)는 D, 하트(Heart)는 H, 클로버(Clover)는 C 입니다.\n");
	getchar();
	printf("예를 들어 ♣1 는 C1 이라고 입력 후 엔터를 눌러주세요. 자 포카드를 만들어 보세요.\n\n");
	while (check != 5) {
		for (cir = 0; cir < 5; cir++) {
			scanf(" %c", &user_shape[cir]);
			scanf("%d", &user_num[cir]);
		}
		for (cir = 0; cir < 5; cir++) {
			if (user_shape[cir] == 'S') {
				if (user_num[cir] == 2 || user_num[cir] == 1)
					check += 1;
			}
			else if (user_shape[cir] == 'D') {
				if (user_num[cir] == 1)
					check += 1;
			}
			else if (user_shape[cir] == 'H') {
				if (user_num[cir] == 1)
					check += 1;
			}
			else if (user_shape[cir] == 'C') {
				if (user_num[cir] == 1)
					check += 1;
			}
		}
		if (check != 5) {
			printf("제대로 입력해주세요\n\n");
			check = 0;
		}
	} 
	printf("\n플레이어 족보 : ♠1 ◆1 ♥1 ♣1 ♠2 Miss\nEnemy 족보 : ♠5 ♠6 ♠7 ♠8 ♠9 스트레이트 플러쉬\n\n");
	Sleep(2000);
	printf("당신은 Miss 가 떴습니다. 그 이유는 ♠1 을 첫 번째 턴에서 사용했기 때문입니다.\n");
	getchar();
	printf("매 턴을 진행할 때 마다 사용한 카드는 다음 턴에 사용할 수 없습니다.\n");
	getchar();
	printf("즉 두 번째턴에서 당신의 족보가 MIss 이긴 하지만 ◆1 ♥1 ♣1 ♠2 도 사용했다고 취급하여\n");
	Sleep(500);
	printf("두 번째 턴에서 Enemy 가 스트레이트 플러쉬를 만드는 데 사용한 ♠5 ♠6 ♠7 ♠8 ♠9 와\n");
	Sleep(500);
	printf("첫 번째 턴에서 당신이 만든 로얄 스트레이트 플러쉬에 사용된 ♠10 ♠J ♠Q ♠K ♠A 와\nEnemy가 만든 포카드에 사용된 ♠13 ◆13 ♥13 ♣13 ♠12 는\n");
	Sleep(500);
	printf("세 번째, 네 번째, 다섯 번째 턴에서 모두 사용할 수 없습니다. 사용시에 두 번째 턴처럼 Miss 가 뜹니다.\n");
	getchar();
	printf("그러므로 매 턴을 진행할 때마다 최소 6장에서 최대 10장까지 사용할 수 없는 카드들이 생깁니다.");
	getchar();
	printf("이 외에도 같은 카드를 중복해서 쓸 경우, 합계가 숫자카드와 다를 경우에도 Miss가 일어납니다.\n");
	getchar();
	printf("그래서 이 게임은 후반으로 갈 수록 더욱 머리를 써야 합니다.\n\n");
	getchar();
	printf("자, 이제 게임을 시작해보도록 하죠.\n\n");
	getchar();
	getchar();
	system("cls");
	return 0;
}