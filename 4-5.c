#include<stdio.h>
#include<string.h>

int main() {
	 
	char* menu[] = {"코카콜라","밀키스","칠성사이다","웰치스","암바사"};
	int price[] = { 1000,900,800,1200,700,2000 };;
	int user_price,number;
	int i = 0;
	printf("        자판기        \n");
	printf("===============================\n");
	for ( i= 1; i < 6; i++) {
		printf("%s", menu[i-1]);
		printf(": %d ", price[i]);
		if (i % 3 == 0) {
			printf("\n");
		}
	}
	printf("===============================\n");
	printf("상품번호를 입력해주세요.\n금액을 넣어주세요.");
	
	return 0;
} 