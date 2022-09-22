#include<stdio.h>
//가독성이 중요한 코드

int main(void) {
	int score = 73;
	char result;
	/*
		if (score >= 90) {
			printf("A");
		}
		else if (score >= 80) {
			printf("B");
		}
		else if (score >= 70) {
			printf("C");
		}
		else if (score >= 60) {
			printf("D");
		}
	*/
	if (score >= 90) {
		result = 'A';
	}
	else if (score >= 80) {
		result = 'B';
	}
	else if (score >= 70) {
		result = 'C';
	}
	else if (score >= 60) {
		result = 'D';
	}

	printf("%c", result);

	return 0;
}