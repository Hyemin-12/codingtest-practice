#include<stdio.h>

int main(void) {
	//char zero = '0';
	//int n = zero - 48;

	//printf("%c\n", zero);
	//printf("%d\n", n);

	//char ch = '9';
	//int number = ch - 48;
	//int n = 9;

	//printf("문자 : %c 수 : %d 수 : %d", ch, number, n);

	char s1[] = "COS PRO";
	char s2[10] = { 'k','o','r','e','a' };

	//s1 = Mirim hight"; 문자열 배열 이름에 대입연산 불가 

	printf("%s %d\n", s1, sizeof(s1)); //%s는 문자열 그대로 입력나오는 것 (시험은 %c로 반복문 돌림)
	printf("%s %d\n", s2, sizeof(s2));
	return 0;
}
