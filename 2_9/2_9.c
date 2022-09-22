#include <stdio.h>

int solution(int votes[], int votes_len, int N, int K) {
	int answer = 0;

	//�ʱ�ȭ
	int counter[11] = { 0 };
	
	//�� �ĺ���ȣ�� ��ǥ ���� ����
	for (int i = 0; i < votes_len; i++) {
		counter[votes[i]]++;
	}

	//���� �ĺ� ��ȣ�� ��ǥ ���� K���̸� ����
	for (int i = 0; i < N; i++) {  //5���� �ĺ��̹Ƿ� 5�� �ݺ��ؼ� ��ǥ ���� ���� ���Ѵ�. 
		if (counter[i] == K) { 
			answer++;
		}
	}

	return answer;
}
int main() {
	int votes[10] = { 2, 5, 3, 4, 1, 5, 1, 5, 5, 3 };
	int votes_len = 10;
	int N = 5;  //�ĺ��� �� 
	int K = 2; //2ǥ
	int ret = solution(votes, votes_len, N, K);
	
	printf("solution �Լ��� ��ȯ���� %d �Դϴ�.\n", ret);
}