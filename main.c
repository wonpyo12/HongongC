#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	//printf("학번 : %d\n",32165);
	//printf("이름 : %s\n", "홍길동");
	//printf("학점 : %c\n", 'A');
	//return 0;
		//unsigned int a;

		//a = 429496;
		//
		//a = -1;
		//printf("%d\n", a);
		//printf("%u\n", a);
	
	//int kor = 70, eng = 80, mat = 90;
	//int tot;
	//tot = kor + eng + mat;
	//printf("국어 : %d ", kor);
	//printf("영어 : %d ", eng);
	//printf("수학 : %d\n", mat);
	//printf("총점 : %d\n", tot);
	
	//int a;
	//printf("숫자를 입력하세요 : ");
	//scanf_s("%d",&a);
	//printf("입력된 숫자는 %d입니다", a);
	
	////문자 하나를 입력 받아 아스키코드로 변환
	//char c;
	//printf("문자를 입력하세요 : ");
	//scanf_s("%c", &c);
	//printf("아스키코드 값은? : %d", c);//아스키 코드는 문자를 정수로 바꿔서 출력하면된다.
	

	//연산자
	//int a = 10, b = 20;
	//int res = 2;
	//a += 20;
	//res *= b + 10;
	//printf("a=%d,b=%d\n", a, b);
	//printf("res = %d\n", res);
	
	//int a = 10, b = 20;
	//int res;
	 
	 //res =(++a,++b);//콤마연산 res = ++a; res= ++b;랑 같다
	 //res = (a > b) ? a : b;//조건연산  조건식이 참이면 낮은값을 res에 저장하고 거짓이면 높은 값을 res에 저장한다.
	 
	//printf("a=%d,b=%d\n", a, b);
	// printf("res = %d\n", res);
	//printf("a<<1 : %d\n",a<<1); // 비트 이동연산자 저장되어있는 수의 주소의 비트를 오른쪽으로 이동 1010에서 비트 한칸이동하여 10100이된다 출력하면 20이 나옴
	
	//문제
	 
	//short a;
	//long b;
	//int res;
	//if (sizeof(a) > sizeof(b)) {
	//	res = 0;
	//}
	//else if (sizeof(a) < sizeof(b)) {
	//	res = 1;
	//}
	//if (res == 1) {
	//	printf("long");
	//}
	//else if (res == 0) {
	//	printf("short");
	//}
	//1번
	//int res;
	//res = sizeof(long) < sizeof(short);
	//printf("%d"==0?"short":"long", res);
	
	//2번
	//int seats = 70;
	//int audience = 65;
	//double rate = 0;
	//rate = ((double)audience / (double)seats)*100;
	//printf("입장률 : %.1lf%%", rate);
	
	//3번
	//int hour, min, sec;
	//double time = 3.76;
	//hour = (int)time;
	//min = (int)(time * 10)%10;
	//sec = (int)(time * 100) % 10;
	//printf("%d시간",hour);
	//printf("%d분", min);
	//printf("%d초", sec);
	
	//4번
	//int kg;
	//float cm;
	//float BMI;
	//printf("몸무게와 키를 입력하세요 : ");
	//scanf_s("%d %.2f", &kg,&cm);
	//
	//BMI = (float)kg/((cm/100)*(cm/100)) ;
	//printf("%d\n", (int)BMI);
	//printf("%s",(20 <= (int)BMI && (int)BMI<25) ? "표준입니다" : "채중관리가 필요합니다.");

	//3-4주차
	//확인문제
	//int n;
	//printf("정수 입력 : ");
	//scanf_s("%d", &n);
	//switch (n % 3) 
	//{
	//	case 0:
	//		printf("거짓");
	//		break;
	//	case 1:
	//		printf("참");
	//		break;
	//	case 2:
	//		printf("참");
	//		break;
	//}
 
//int age = 25, chest = 95;
//char size = "";
//if (age < 20) {
//	if (chest >= 95) {
//		size = 'L';
//	}
//	else if (chest >= 85) {
//		size = 'M';
//	}
//	else {
//		size = 'S';
//	}
//}
//else {
//	if (chest >= 100) {
//		size = 'L';
//	}
//	else if (chest >= 90) {
//		size = 'M';
//	}
//	else {
//		size = 'S';
//	}
//}
//printf("사이즈는 %c입니다.\n", size);

//실전 문제 1번
//int a = 0, b =0, sum = 0;
//char c = 'a';
//printf("사칙연산 입력(정수) : ");
//scanf("%d %c %d",&a,&c,&b); //scanf_s는 보안때문에 문자나 문자열을 적을려면(unsigned int)sizeof(c)를 써줘야한다.
//
//if (c == '+')
//sum = a + b;
//
//else if (c == '-')
//sum = a - b;
//
//else if (c == '*')
//sum = a * b;
//
//else if (c == '/')
//sum = a / b;
//
//printf("%d %c %d = %d",a,c,b,sum);

//int a = 20;
//
//
//if (a > 20) {
//	a = 1;
//}
//else {
//	a = -1;
//}
//printf("a : %d\n", a);

//반복문
//int n = 5;
//	for (int j = 0; j < n; j++) {
//	
//		
//		for (int i = 0; i < n; i++) {
//			if (i == j || j+i==n-1) {
//				printf("*");
//			}
//			
//			else {
//				printf(" ");
//			}
//			
//		}
//		printf("\n");
//	}
//int a,b;
//int count = 0;

//printf("2이상의 정수를 입력하세요 : ");
//scanf("%d", &a);
//for (int i = 2; i < a; i++) {
//	b = 1;
//	if (a < 2) {
//		printf("2보다 큰수를 입력해야합니다.");
//		break;
//	}
//	for (int j = 2; j < i; j++) {
//		if (i % j == 0) {
//			b = 0;
//		}
//	}
//	if ( b== 1) {
//		count = count + 1;
//		if (i < 10)printf(" %d", i);
//		else
//		{
//			printf("%d", i);
//		}
//		
//		printf(" ");
//	}
//	if (count == 5) {
//		printf("\n");
//		count = 0;
//	}
//
//}

//do while문 조건식과 상관없이 한번실행함
//int count = 0;
//int i = 0;
//printf("숫자를 입력하세요");
//scanf("%d", &count);
//do {
//	printf("Be happy\n");
//	i++;
//} while (i < count);
return 0;
	
}