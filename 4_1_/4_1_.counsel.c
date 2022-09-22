#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len) {
	int x_count = 0;
	int* answer = (int*)malloc(sizeof(int)*schedule_len);

    for (int i = 0; i < schedule_len; i++) answer[i] = 0;

    for (int i = 0; i < schedule_len; i++) {
        if (schedule[i] == "X") {
            answer[x_count] = i + 1;
            x_count++;
        }
    }

	return answer;
}

int main() {
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
    int* ret = solution(schedule, 10);

    printf("solution 함수의 반환 값은 ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]);
    printf("입니다.");
}