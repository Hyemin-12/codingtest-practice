#include<stdio.h>

int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;
	//���ڿ��� ���� 
	for (int i = 0; i < 20; i++) {
		if (s1[i] == 0) { //������ ���̸� ����
			break;
		}
		else {
			cnt++;
		}
	}
	//�����ϱ� 
	for (int i = 0; i < cnt; i++) {
		s2[i] = s1[i];
	}

	//����ϱ� 
	printf("���� : %s\n", s1);
	for (int i = 0; i < cnt; i++) {
		printf("���纻 : %c",s2[i]);
	}
	return 0;
}