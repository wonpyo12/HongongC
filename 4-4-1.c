#include<stdio.h>
int main() {
	//int num,grade;
	//printf("학번을 입력 : ");
	//scanf("%d", &num);
	//getchar();
	//printf("학점 입력 : ");
	//grade = getchar();
	//printf("학번 : %d, 학점 : %c", num, grade);

	//int name;
	//int age;
	//printf("이름 첫 글자 입력 : ");
	//name = getchar();
	//getchar();
	//printf("나이 입력 : ");
	//scanf("%d", &age);
	//printf("이름 : %c, 나이 : %d\n", name, age);

	//int studentld;
	//int name;
	//int grade;
	//
	//printf("학번 입력 : ");
	//scanf("%d", &studentld);
	//getchar();
	//printf("이름 첫 글자 입력 : ");
	//name = getchar();
	//getchar();
	//printf("학점 입력 : ");
	//grade = getchar();
	//printf("\n=== 학생 정보 ===\n");
	//printf("학번 : %d\n",studentld);
	//printf("이름 : %c\n", name);
	//printf("학점 : %c\n", grade);

	int count;
	char grades[5];
	int scores[5];
	int i;

	printf("학생 수 입력 : ");
	scanf("%d", &count);
	getchar();

	for (i = 0; i < count; i++) {
		printf("\n[%d번 학생]\n", i + 1);

		printf("학점 입력 : ");
		grades[i] = getchar();
		//getchar();

		printf("점수 입력 : ");
		scanf("%d",&scores[i]);
		getchar();
	}
	printf("\n == = 결과 == = \n");
	for (i = 0; i < count; i++)
	{
		printf(" % d번: % c(% d점)\n", i + 1, grades[i], scores[i]);
	}

	return 0;
}