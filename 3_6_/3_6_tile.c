#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int tile_length) {
	char* answer = (char*)malloc(sizeof(char) * (tile_length + 1));
	char com[6] = { 'R', 'R', 'R', 'G', 'G', 'B' };

	// 3 5 6 9 11 12
	if (tile_length % 6 == 3 || tile_length % 6 == 5 || tile_length % 6 == 0) {
		for (int i = 0; i < tile_length-1; i++) {
			answer[i] = com[i % 6];
		}
	}
	else strcpy(answer, "-1");

	return answer;
}

int main() {
	int tile_length1 = 11;
	char* ret1 = solution(tile_length1);
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

	int tile_length2 = 16;
	char* ret2 = solution(tile_length2);
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}