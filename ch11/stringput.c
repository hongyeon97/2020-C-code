#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h> 

int main(void)
{
	char name[20], dept[30]; //char *name, *dept; 실행 오류 발생

	printf("%s", "학과 입력 >> ");
	scanf("%s", dept);
	printf("%s", "이름 입력 >> ");
	scanf("%s", name);
	printf("출력: %10s %10s\n", dept, name);

	return 0;
}
