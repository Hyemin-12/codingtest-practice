#include<stdio.h>
//���ڿ��� ���̸� ������ �ʰ� ���� => ������ ��ҿ� ���� ���� 
int main(void) {
	char s1[20] = { "coding test" };
	char s2[20];
	int cnt = 0;

	//�����ϱ� 
	for (int i = 0; i < 20; i++) {
		s2[i] = s1[i];
	}

	//����ϱ� 
	printf("���� : %s\n", s1);
	for (int i = 0; i < 20; i++) {
		if (s2[i] == 0) {  //������ ���� ������ �ʰ� �ϱ� ���� ������ ���忡 0�� �־��ش�. 
			break;
		}
		printf("%c", s2[i]);
	}
	return 0;
}