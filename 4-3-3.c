#include <stdio.h>
//"#### 문제
//몫과 나머지 입력 프로그램
//키보드로 입력한 양수를 4로 나누어 몫과 나머지를 변수에 저장하는 함수를 만듭니다.다음 main 함수와 실행결과를 참고하여 작성합니다.
//
//#### main함수
//int main(void)
//{
//	int mod, rem;
//	func(&mod, &rem);
//	printf(""몫 : % d, 나머지 : % d"", mod, rem);
//
//	return 0;
//}
//
//#### 실행결과
//양수 입력 : 9
//몫 : 2, 나머지 : 1"
int func(int* num, int* add);
int main() {
	int mod, rem;
	func(&mod, &rem); //주소값으로 받아옴
	printf("몫 : %d, 나머지 : %d", mod, rem);
	return 0;
}
int func(int* num ,int* add) { //주소값으로 받아오기때문에 포인터 변수 사용
	int a;
	printf("양수 입력 : ");
	scanf("%d", &a);
	*num = a / 4; // 포인터변수로 저장하여 주소값이 들어왔을때 그값을 넣을수 있게 함
	*add = a % 4;
	return 0;
}