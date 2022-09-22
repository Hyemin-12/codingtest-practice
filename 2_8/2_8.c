#include <stdio.h>

int solution(int number) {
	int count = 0;
	
	while (number >= 1) { //number�� ���� ���� 
		int num = number % 10;  //���ڸ����� �߶󳻱� 
		if (num == 2 || num == 3 || num == 5 || num == 7) {
			count++;
		}
		number /= 10;
	}
	return count;
}

int main() {
	int number = 29022531;
	int ret = solution(number);

	printf("solution �Լ��� ��ȯ���� %d �Դϴ�.", ret);
}