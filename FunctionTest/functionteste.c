#include<stdio.h>

void display(int num, char c) {
	for (int i = 0; i < num; i++) {
		printf("%c",c);
	}
}

int isEven(int num) {
	/*
	if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
	*/
	return (num % 2 == 0) ? 1 : 0;
}
int main(void) {
	display(20, '#');
	if (isEven(10) == 1) {
		printf("\nÂ¦¼öÀÔ´Ï´Ù.");
	}
	else {
		printf("\nÈ¦¼öÀÔ´Ï´Ù.");
	}
	return 0;
}