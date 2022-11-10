#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/*
A ���б��� �౸������ ��ü�� �౸ȭ�� �ֹ��ϱ� ���� �л����� �Ź߻���� ����
������ �� �ִ� �౸ȭ ������� ���� �������� "7", "7.5", "8", "8.5", "9", "9.5" �� 6����
������� �౸ȭ�� �� ���� �ʿ����� ���� ���� ��������� ������� �迭�� ��� return �ϵ��� solution �Լ� �ϼ�
*/

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * shirt_size_len);
	for (int i = 0; i < 6; i++) answer[i] = 0;

	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "7") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "7.5") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "8") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "8.5") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "9") == 0) answer[4]++;
		else if (strcmp(shirt_size[i], "9.5") == 0) answer[5]++;
	}

	return answer;
}

int main() {
	char* shirt_size[] = { "7", "9.5", "8", "9", "7", "9" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution �Լ��� ��ȯ ���� {");

	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}

	printf("} �Դϴ�.\n");
}