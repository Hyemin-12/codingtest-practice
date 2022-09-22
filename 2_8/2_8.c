#include <stdio.h>

int solution(int number) {
	int count = 0;
	
	while (number >= 1) { //number이 참인 동안 
		int num = number % 10;  //뒷자리부터 잘라내기 
		if (num == 2 || num == 3 || num == 5 || num == 7) {
			count++;
		}
		number /= 10;
	}
	return count;
}

int main() {
	int number = 29022531;
	int ret = solution(number);

	printf("solution 함수의 반환값은 %d 입니다.", ret);
}