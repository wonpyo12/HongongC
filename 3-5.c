//#include<stdio.h>
//int sum(int temp);
//int main() {
//	sum(10);
//	sum(100);
//	return 0;
//}
//int sum(int temp){
//	int total=0;
//	for (int i = 0; i <= temp; i++) {
//		total = total + i;
//	}
//	printf("1부터 %d까지의 합은 %d입니다.\n",temp,total);
//	return total;
//}

//#include<stdio.h>
//int sum(int x, int y);//함수 쓰고 매개변수랑 함수 타입 명 위에 써줘야한다.
//int main() {
//	int a = 10, b = 20;
//	int result;
//
//	result = sum(a, b);
//	printf("result : %d\n", result);
//	return 0;
//}
//int sum(int x, int y) {
//	int temp;
//	temp = x + y;
//	return temp;
//}


//#include <stdio.h>
//double averge(double a, double b);
//int main() {
//	double res;
//	res = averge(1.5,3.4);
//	printf("%.2f",res);
//	return 0;
//}
//double averge(double a, double b) {
//	double temp;
//	temp = a + b;
//	return (temp / 2.0);
//}

//#include<stdio.h>
//int get_num(void);
//int main() {
//	int result;
//	result = get_num();
//	printf("반환값 : %d\n", result);
//	return 0;
//}
//int get_num(void) {
//	int num;
//
//	printf("양수를 입력 : ");
//	scanf("%d", &num);
//	return num;
//}

//#include<stdio.h>
//void print_char(char ch, int count);
//int main() {
//	print_char('@', 5);
//	return 0;
//}
//
//void print_char(char ch, int count) {
//	int i;
//
//	for (i = 0; i < count; i++) {
//		printf("%c", ch);
//
//	}
//	return;
//}

//#include<stdio.h>
//void print_line(void);
//
//int main() {
//	print_line();
//	printf("학번       이름         전공         학점\n");
//	print_line();
//	return 0;
//}
//void print_line() {
//	int i;
//	for (i = 0; i < 50; i++) {
//		printf("-");
//	}
//	printf("\n");
//	return;
//}

//#include<stdio.h>
//void fruit(int count);
//int main() {
//
//	fruit(1);
//	return 0;
//}
//
//void fruit(int count) {
//	
//	printf("apple\n");
//	if (count == 3) return;
//	fruit(count+1);
//	printf("jam\n");
//}

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

