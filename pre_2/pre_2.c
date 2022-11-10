#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/*
A 중학교의 축구팀에서 단체로 축구화를 주문하기 위해 학생별로 신발사이즈를 조사
선택할 수 있는 축구화 사이즈는 작은 순서부터 "7", "7.5", "8", "8.5", "9", "9.5" 총 6종류
사이즈별로 축구화가 몇 개씩 필요한지 가장 작은 사이즈부터 순서대로 배열에 담아 return 하도록 solution 함수 완성
*/

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * shirt_size_len);
	for (int i = 0; i < 6; i++) answer[i] = 0;

	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "7") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "7.5") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "8") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "8.5") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "9") == 0) answer[4]++;
		else if (strcmp(shirt_size[i], "9.5") == 0) answer[5]++;
	}

	return answer;
}

int main() {
	char* shirt_size[] = { "7", "9.5", "8", "9", "7", "9" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");

	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}

	printf("} 입니다.\n");
}