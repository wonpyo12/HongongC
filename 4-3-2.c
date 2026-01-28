#include <stdio.h>
//1부터 45까지 수중에 6개의 숫자를 입력하여 출력하는 프로그램
//이미 입력한 번호와 같은 번호를 입력하면 중복 오류 메시지 출력하고 새로 입력
//
int main() {
	int number[7];
	
	for (int i = 0; i < 6; i++) {
		printf("로또번호 입력 : ");
		scanf("%d", &number[i]);
		if (number[i] > 45 || number[i]<1) {
			printf("45보다 작고 1보다 커야합니다.\n"); //45보다 작고 1보다 커야한다.
			i--; //잘못된 정수를 입력할경우 횟수가 원래상태로 돌아가야하기 때문에 i에 1을 빼주었다.
			continue;
		}
		
		if (number[i] == number[i-1]) { //같은 번호면 같은 번호가 있습니다 출력하고 횟수 새로입력 
			printf("같은 번호가 있습니다.\n");
			i--; 
			continue; // 이조건이 참이면 다시 for로 돌아가서 실행
		}
		else if (number[i] == number[i - 2]) {
			printf("같은 번호가 있습니다.\n");
			i--;
			continue;
		}
		else if (number[i] == number[i - 3]) {
			printf("같은 번호가 있습니다.\n");
			i--;
			continue;
		}
		else if (number[i] == number[i - 4]) {
			printf("같은 번호가 있습니다.\n");
			i--;
			continue;
		}
		else if (number[i] == number[i - 5]) {
			printf("같은 번호가 있습니다.\n");
			i--;
			continue;
		}
		
		}
	printf("입력된 로또 번호 : ");
	for (int j = 0; j < 6; j++) {
		printf("%d ", number[j]); //배열 출력
	}
	return 0;
}
