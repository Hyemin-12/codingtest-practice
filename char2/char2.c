#include<stdio.h>
int main(void) {
	char colors[5][10] = { "red","green","blue","brown","cyan" };
	//문자 단위로 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c", colors[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//단어 단위로 출력
	for (int i = 0; i < 5; i++) {
		printf("%s\n", colors[i]);
	}
	return 0;
}