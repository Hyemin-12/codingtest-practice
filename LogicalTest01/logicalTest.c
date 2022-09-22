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
	/*
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

	printf("%c\n", result);

	int c = 200;
	if (0 <= c || c < 100) {
		printf("0부터 100사이\n");
	}
	if (0 <= c && c < 100) {
		printf("0부터 100사이\n");
	}

	int d = 5;
	if (d) {
		printf("결과가 참일 때로 생각해서 진행합니다.\n");
	}
	
	int e = 10;
	if (e == 10)
		printf("Hi\n");  //{}가 없으면 위에 문장 하나만 실행이 되는 것이다. 
		printf("Hello");

		*/
		int total = 0;
		for (int i = 0; i < 100; i++) {
			total += i;
			if (total == 10) {
				break;
			}
			printf("%d\n", total);
	}
	return 0;

}