#include<stdio.h>

int main(void) {
	int number = 100;
	printf("number �ּ� : %p �� : %d\n", &number, number);
	// %p -> ������ �ּҰ� ������ 

	int n = 5;
	int* ptr = &n; //n�� ����Ű�� �ּҰ��� ����ִ� ���� ptr�� �޴� ��(5)
	*ptr = 10; //ptr�ּҰ� ����Ű�� ���� ���� 10���� �ٲٰڴ�.
	printf("n�� �� : %d\n", n);

	int m = 6;
	int *ptr2 = &m; //m�� �ּҰ��� ������ ���� �����ͺ��� ptr2�� �޴� �� 
	*ptr2 = 34; //m�� �ּҸ� ����Ű�� ptr2�� ���� 34�� �����Ѵ�. 
	printf("m�� �� : %d", m);

	return 0;
}