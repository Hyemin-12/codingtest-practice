#include<stdio.h>
// s1[20]={"codiong test"}의 문자열의 길이를 while문과 for문을 이용하여 구해보자. 
int main(void) {
	char s1[30] = {"coding test exercise" };
	int cnt = 0;

	while (s1[cnt] != '\0') {
		cnt++;
	}
	printf("문자열의 길이 : %d\n", cnt);

	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break;
		cnt++;
	}
	printf("문자열의 길이 %d: ", cnt);

	return 0;
}
