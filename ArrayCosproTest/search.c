//1~10������ ���� �߿��� 
#include<stdio.h>

int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num;
//	int temp;
	int i;

	//scanf, rand() �� ���� �� �Ѱ��� ����� �̿��� ���ڸ� �߻�(�Է� �޾�)
	//�� ��° ��ġ�� �ִ��� ��ġ���� ���� �Ǵ� '������' '����'��� ���
	
	//scanf����� ��� 
	//printf("1���� 10���� ���� �߿��� �Է��Ͻÿ� > ");
	//scanf_s("%d", &num);

	//rand() ����� ���
	num = rand() % 10 + 1;

	/*
	for (int i = 0; i < 10; i++) {
		if (arr[i] == num) {
			temp = i;
		}
	}
	*/

	for (i = 0; i < 10; i++) {  //int i�� for�� ������ �����Ƿ� �������� X ����������
		if (num == arr[i]) {
			break;  //i�� �ش� �ε����� ����� ä break;
		}
	}
	if (i < 10) {
		printf("%d��° ��",i);
	}
	else {
		printf("���� ����");
	}
	//printf("�Է��Ͻ� �� %d�� ��ġ���� arr[%d]�Դϴ�.", num, temp);

	return 0; 
}