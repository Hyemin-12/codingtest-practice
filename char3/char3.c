#include<stdio.h>
// s1[20]={"codiong test"}�� ���ڿ��� ���̸� while���� for���� �̿��Ͽ� ���غ���. 
int main(void) {
	char s1[30] = {"coding test exercise" };
	int cnt = 0;

	while (s1[cnt] != '\0') {
		cnt++;
	}
	printf("���ڿ��� ���� : %d\n", cnt);

	for (int i = 0; i < 30; i++) {
		if (s1[i] == 0) break;
		cnt++;
	}
	printf("���ڿ��� ���� %d: ", cnt);

	return 0;
}
