/*1. 배열(길이 10)에 임의의 정수(rand()함수 사용)를 저장하고
* 그 합과 평균을 구하는 코드를 작성해보자. (sumAvg.c)
* 2. 이 때 임의의 정수는 1~100의 값으로 지정한다.
* 3. 저장/ 합계/ 평균을 구하는 과정을 분리하여 코딩하는 습관을 기르자.
* 4. 1~100:  rand()%100 + 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
	int arr[10] = { 0 };  //초기화 주의!
	int sum = 0;
	double avg = 0;
	srand(time(NULL));  //난수 설정 
	//저장
	for (int i = 0; i < 10; i++) {
		arr[i] = (rand() % 100) + 1;  //1~100까지
		printf("%d\n", arr[i]);
	}

	//합계
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}

	//평균
	int len = sizeof(arr) / sizeof(arr[0]);  //배열의 길이
	avg = (double)sum / len; //형변환.

	//출력
	printf("\n");
	printf("합계: %d\n", sum);
	printf("평균: %.1lf\n", avg);
}