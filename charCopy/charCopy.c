#include<stdio.h>

int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;
	//문자열의 길이 
	for (int i = 0; i < 20; i++) {
		if (s1[i] == 0) { //쓰레기 값이면 멈춤
			break;
		}
		else {
			cnt++;
		}
	}
	//대입하기 
	for (int i = 0; i < cnt; i++) {
		s2[i] = s1[i];
	}

	//출력하기 
	printf("원본 : %s\n", s1);
	for (int i = 0; i < cnt; i++) {
		printf("복사본 : %c",s2[i]);
	}
	return 0;
}