#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* size[], int len) {
	int* answer;
	//동적할당 
	answer = (int*)malloc(sizeof(int) * len);
	//초기화 
	for (int i = 0; i < len; i++) {
		answer[i] = 0;
	}
	//로직 
	for (int i = 0; i < len; i++) {
		if (strcmp(size[i], "XS") == 0) answer[0]++;
		if (strcmp(size[i], "S") == 0) answer[1]++;
		if (strcmp(size[i], "M") == 0) answer[2]++;
		if (strcmp(size[i], "L") == 0) answer[3]++;
		if (strcmp(size[i], "XL") == 0) answer[4]++;
		if (strcmp(size[i], "XXL") == 0) answer[5]++;
	}
	return answer;
}

int main(void) {
	char* shirt_size[] = { "XS","XS","XXL","S","M","L" };
	int* result = solution(shirt_size, 6);
	for (int i = 0; i < 6; i++) {
		printf("%d\t", result[i]);
	}
	return 0;
}