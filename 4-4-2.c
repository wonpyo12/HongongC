#include<stdio.h>
#include<string.h>
int main() {
//	char str1[80], str2[80];
//	char* resp;
//
//	printf("2개의 과일 이름 입력 : ");
//	scanf("%s%s", str1, str2);
//	if (strlen(str1) > strlen(str2)) resp = str1;
//	else
//		resp = str2;
//	printf("이름이 긴 과일은  : %s\n", resp);

	//char str1[80] = "strawberry";
	//char str2[80] = "apple";
	//char* pa1 = "banana";
	//char* pa2 = str2;
	//printf("최초 문자열 : %s\n", str1);
	//strcpy(str1, str2);
	//printf("바뀐 문자열 : %s\n", str1);
	//strcpy(str1, pa1);
	//printf("바뀐 문자열 : %s\n", str1);
	//strcpy(str1, pa2);
	//printf("바뀐 문자열 : %s\n", str1);
	//strcpy(str1, "banana");
	//printf("바뀐 문자열 : %s\n", str1);

	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str,"piece",3);
	printf("%s\n", str);
	return 0;
}