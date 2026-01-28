#include <stdio.h>
//다섯명의 심사위원의 점수를 입력받음
//유효 점수는 최소값과 최대값을 제외
//유효 점수의 평균 소수값으로 나오게(타입 double,float)
//연습문제 2-1

int main() {
	int score[5];
	printf("1번째 심사위원 점수를 입력하세요 : "); //최대값,최소값을 저장할 변수에 초기값 설정을 위해 먼저 하나를 받아 저장하기
	scanf("%d", &score[0]);
	int max = score[0];
	int min = score[0];
	int total = 0; // 유효점수 합계
	int j,co = 0; //유효점수 개수 및 반복문 변수
	double avg = 0;//평균은 실수 이므로 저장할 변수 double형으로 설정
	for (int i = 1; i < 5; i++) {
		printf("%d 심사위원 점수를 입력하세요 : ",i+1);
		scanf("%d",&score[i]);
		if (score[i] > max) {
			max = +score[i]; //최대값이면 max에 저장
		}
		
		if (score[i] < min) {
			min = +score[i];//최소값이면 min에 저장
		}
		
	}
	printf("유효점수 : ");
	for (j = 0; j < 5; j++) {
		if (min == score[j]) {
			continue; //최소값이면 밑에 있는 구문 실행하지 않고 반복문 다시시작
		}
		else if (max == score[j]) {
			continue; //최대값이면 밑에있는 구문실행하지않고 반복문 다시시작
		}
		printf("%d ", score[j]);
		total = total+score[j]; //합계
		co++;//개수 카운터
	}
	printf("\n");
	avg = (double)total / (double)co; //평균이 double이기 때문에 정수형인 total과 co를 double로 타입변환
	printf("평균 : %.1f",avg);
	return 0;
}