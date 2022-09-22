#include<stdio.h>
#include<string.h>

int main(void) {
	char s1[100] = "coding test";
	char s2[100];
	char s3[100];
	
	printf("s1문자열의 길이 : %d\n", strlen(s1));
	strcpy(s2, s1); // 항상 원본이 뒤에 온다.
	printf("%s\n", s2);
	strcat(s2, s1);
	printf("%s\n", s2);
	printf("%d\n", strcmp("mirim", "high"));
	printf("%d\n", strcmp("mirim", "mirim"));

	//strcmp는 if문 안에 많이 사용될 것이다,.
	//if (strcmp(student[i], "XS") == 0) { //맞으면 0 아니면 -1 또는 1 
	//	count[i]++;
	//}

	return 0;
}