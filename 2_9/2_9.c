#include <stdio.h>

int solution(int votes[], int votes_len, int N, int K) {
	int answer = 0;

	//초기화
	int counter[11] = { 0 };
	
	//각 후보번호별 투표 개수 세기
	for (int i = 0; i < votes_len; i++) {
		counter[votes[i]]++;
	}

	//만약 후보 번호별 투표 수가 K개이면 증감
	for (int i = 0; i < N; i++) {  //5명의 후보이므로 5번 반복해서 투표 받은 수를 비교한다. 
		if (counter[i] == K) { 
			answer++;
		}
	}

	return answer;
}
int main() {
	int votes[10] = { 2, 5, 3, 4, 1, 5, 1, 5, 5, 3 };
	int votes_len = 10;
	int N = 5;  //후보자 수 
	int K = 2; //2표
	int ret = solution(votes, votes_len, N, K);
	
	printf("solution 함수의 반환값은 %d 입니다.\n", ret);
}