//재귀함수
#include<stdio.h>
int rec_func(int n);
int main() {
	int rec_total = rec_func(10);
	int num;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	int num_total = rec_func(num);
	printf("%d", num_total);
	return 0;
}
int rec_func(int n) {
	
	
	
	if (n<=0)return 0;
	else if (n > 10) {
		printf("10보다 큰수는 입력할 수 없습니다. ");
		return n;
	}
	rec_func(n - 1);
	
	return n+rec_func(n-1);
	
	
}
