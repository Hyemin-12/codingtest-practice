//1~10까지의 숫자 중에서 
#include<stdio.h>

int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int num;
//	int temp;
	int i;

	//scanf, rand() 두 가지 중 한가지 방법을 이용해 숫자를 발생(입력 받아)
	//몇 변째 위치에 있는지 위치값을 리턴 또는 '없으면' '없다'라고 출력
	
	//scanf사용한 방법 
	//printf("1부터 10까지 숫자 중에서 입력하시오 > ");
	//scanf_s("%d", &num);

	//rand() 사용한 방법
	num = rand() % 10 + 1;

	/*
	for (int i = 0; i < 10; i++) {
		if (arr[i] == num) {
			temp = i;
		}
	}
	*/

	for (i = 0; i < 10; i++) {  //int i가 for문 밖으로 있으므로 지역변수 X 전역변수임
		if (num == arr[i]) {
			break;  //i에 해당 인덱스가 저장된 채 break;
		}
	}
	if (i < 10) {
		printf("%d번째 방",i);
	}
	else {
		printf("값이 없다");
	}
	//printf("입력하신 값 %d의 위치값은 arr[%d]입니다.", num, temp);

	return 0; 
}