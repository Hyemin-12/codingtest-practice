#include<stdio.h>  //�⺻ �����
//#include<string.h> //user�� ���õ� ���� ���

int main(void) {
	int score[] = { 650,722,914,558,714,803,650,679,669,800 };
	int result;
	result = solution(score, 10); //solution �Լ� ������
	printf("������� : %d\n", result);
	return 0;
}

int solution(int score[], int score_length) {
	int cnt = 0;
	for (int i = 0; i < score_length; i++) {
		if(650 <= score[i] && 800 > score[i])
			cnt++;
	}
	return cnt;
}