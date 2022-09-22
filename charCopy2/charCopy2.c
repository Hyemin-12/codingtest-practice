#include<stdio.h>
//문자열의 길이를 구하지 않고 복사 => 마지막 요소에 널을 삽입 
int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;

	//대입하기 
	for (int i = 0; i < 20; i++) {
		s2[i] = s1[i];
	}

	//출력하기 
	printf("원본 : %s\n", s1);
	for (int i = 0; i < 20; i++) {
		if (s2[i] == 0) {  //쓰레기 값이 나오지 않게 하기 위해 마지막 문장에 0을 넣어준다. 
			break;
		}
		printf("%c", s2[i]);
	}
	return 0;
}