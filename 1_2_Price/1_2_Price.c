#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int price, char* grade) {
	int result;
	if (strcmp(grade, "S") == 0) result = (int)(price * 0.95);
	if (strcmp(grade, "G") == 0) result = (int)(price * 0.9);
	if (strcmp(grade, "V") == 0) result = (int)(price * 0.85);
	//if (grade == "S") result = price * 0.95;
	//if (grade == "G") result = price * 0.9;
	//if (grade == "V") result = price * 0.85;

	return result;
}

int main(void) {
	char* grade[6] = { "S","G","V" };
	int result;
	result = solution(2500, "V");
	printf("할인금액 : %d\n", result);

	return 0;
}