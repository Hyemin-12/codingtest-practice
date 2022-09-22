#include<stdio.h>
int solution(int score[], int len) {
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (score[i] >= 650 && score[i] < 800) {
			count++;
		}
	}
	return count;
}
int main(void) {
	int score[] = { 650,722,914,588,714,803,650,679,669,800 };
	int result;
	result = solution(score, 10);
	printf("수강대상 : %d\n", result);
	return 0;
}