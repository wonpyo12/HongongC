#include <stdio.h>
void rotate(int* pa, int* pb, int* pc);
int main() {
	int a=1 , b=2, c=3; //1,2,3으로 초기화
	rotate(&a, &b, &c);
	
	return 0;
}
void rotate(int* pa, int* pb, int* pc) {//주소값으로 받아오기때문에 포인터 변수
	int  temp;
	char en;
	while(1){
		printf("%d:%d:%d", *pa, *pb, *pc);
		scanf("%c", &en);
		if (en == '\n') {//엔터 누르면 값이 바뀌게한다
			temp = *pa; // *pa temp에 저장
			*pa = *pb;//*pa에 *pb값을 넣어준다.
			*pb = *pc;//pb*에*pc값을 넣어준다.
			*pc = temp;//*pc값에 temp에 저장된 *pa값을 넣어준다.
		}
		else {
			break;//만약 엔터말고 다른문자를 입력하면 정지
			
		}
	}
}