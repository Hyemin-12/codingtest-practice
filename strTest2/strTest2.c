#include<stdio.h>
#include<string.h>
int main(void) {
	char s1[7][10] = { "�ѱ�","�̱�","�Ϻ�","����","����","ȣ��","����" };
	//int s1_len = 7;
	int s1_len = sizeof(s1[0]) / sizeof(char);

	for (int i = 0; i < 7; i++) {
		if (strcmp(s1[i], "����") == 0) {
			printf("%d��°�� ������ �ֽ��ϴ�.\n", i+1);
		}
	}

}