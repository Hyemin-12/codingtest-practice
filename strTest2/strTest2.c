#include<stdio.h>
#include<string.h>
int main(void) {
	char s1[7][10] = { "한국","미국","일본","영국","독일","호주","독일" };
	//int s1_len = 7;
	int s1_len = sizeof(s1[0]) / sizeof(char);

	for (int i = 0; i < 7; i++) {
		if (strcmp(s1[i], "독일") == 0) {
			printf("%d번째에 독일이 있습니다.\n", i+1);
		}
	}

}