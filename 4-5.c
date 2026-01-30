#include<stdio.h>
#include<string.h>

int main() {
	 
	char* menu[] = {"코카콜라","밀키스","칠성사이다","웰치스","암바사"};
	int price[] = { 1000,900,800,1200,700,2000 };;
	int user_price,number;
	int i = 0;
	printf("            자판기             \n");
	printf("===============================\n");
	for ( i= 1; i < 6; i++) {
		printf("%s", menu[i-1]);
		printf(": %d ", price[i]);
		if (i % 3 == 0) {
			printf("\n");
		}
	}
	printf("\n===============================\n");
	printf("상품번호를 입력해주세요 : ");
	scanf("%d", &number);
	printf("사용하실 금액을 입력해주세요 : ");
	scanf("%d", &user_price);
	for (i = 0; i < 6; i++) {
		if (strcmp(menu[number],menu[i])==0) {
			if (price[i] < user_price) {
				printf("%d원이 남습니다. 거스름돈 반환\n", user_price - price[i]);
				printf("결재완료!! 상품 %s가 %d원결재되었습니다.상품을 가져가 주세요", menu[i - 1], price[i]);
			}
			else if (price[i] > user_price) {
				printf("%d원이 부족합니다.\n", price[i] - user_price);
				printf("%d원을 반환합니다. 다음에 다시 이용해주세요", user_price);
			}
			else if(price[i] == user_price) {
				printf("결재완료!! 상품 %s가 %d원결재되었습니다.상품을 가져가 주세요", menu[i-1], price[i]);
			}
			break;
		}
	}

	
	return 0;
} 