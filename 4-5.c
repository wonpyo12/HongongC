#include<stdio.h>
#include<string.h>

int main() {
	 
	char* menu[] = {"코카콜라","밀키스","칠성사이다","웰치스","암바사"}; //메뉴
	int price[] = { 1000,900,800,1200,700 }//하나당 가격
	int user_price,number,priceadd;
	int i = 0;
	char a[10];
	printf("            자판기             \n"); //기본 세팅
	printf("===============================\n");
	for (i = 0; i < 5; i++) {
		printf("%s", menu[i]);
		printf(": %d ", price[i]);
		printf("\n");
	
	}
	printf("===============================\n");
	printf("상품번호를 입력해주세요 : ");
	scanf("%d", &number);
	printf("사용하실 금액을 입력해주세요 : ");
	scanf("%d", &user_price);
	printf("잔액 : %d\n", user_price);
	for (i = 0; i < 6; i++) {
		if (number<1 || number>6) {
			printf("없는 상품 번호입니다 : ");
			printf("상품번호를 다시입력해주세요 : ");
			scanf("%d", &number);
		}
		if (strcmp(menu[number-1],menu[i])==0) {//만약 입력된 상품 번호와 상품번호가 맞으면 실행
			if (price[i] < user_price) {//유저가 입력한 가격이 상품가격보다 높으면 실행
				user_price = user_price - price[i];
				printf("%d원이 남습니다.\n", user_price);
				printf("결재완료!! 상품 %s가 %d원결재되었습니다.상품을 가져가 주세요.\n", menu[i], price[i]);
				printf("상품을 추가로 결재 하시겠습니까?(yes/no)");
				scanf("%s", &a);
				if (strcmp(a, "yes") == 0) {//yes를 누르면 추가결재
					printf("추가로 구매하실 상품 번호를 입력해주세요 : ");
					scanf("%d", &number);
					i = 0;
				}
				else if (strcmp(a, "no") == 0) {//no누르면 끝
					printf("거스름돈 %d원을 반환합니다. 다음에 다시 이용해주세요", user_price);
					break;
				}
			}
			else if (price[i] > user_price) {//유저가 입력한 가격이 상품가격보다 낮으면 실행
				printf("%d원이 부족합니다.금액을 추가로 넣으시겠습니까?(yes/no) : ", price[i] - user_price);
				scanf("%s", &a);
				
				if (strcmp(a,"yes")==0) {
					printf("추가로 넣으실 금액을 입력해주세요 : ");
					scanf("%d", &priceadd);
					user_price = user_price+priceadd;
					i = 0;
				}
				else if (strcmp(a,"no")==0) {
					printf("%d원을 반환합니다. 다음에 다시 이용해주세요", user_price);
					break;
				}
				
			}
			else if (price[i] == user_price) {//유저가 입력한 가격이 상품가격과 같으면 실행
				printf("거스름돈이 없습니다.");
				printf("결재완료!! 상품 %s가 %d원결재되었습니다.상품을 가져가 주세요\n", menu[i], price[i]);
				printf("상품을 추가로 결재 하시겠습니까?(yes/no)");
				scanf("%s", &a);
				if (strcmp(a, "yes") == 0) {
					printf("추가로 구매하실 상품 번호를 입력해주세요 : ");
					scanf("%d", &number);
					printf("추가하실 금액을 입력해주세요 : ");
					scanf("%d", &user_price);
					i = 0;

				}
				else if (strcmp(a, "no") == 0) {
					printf("이용해 주셔서 감사합니다.");
					break;
				}

			}

			
		}
		
	}

	
	return 0;
} 