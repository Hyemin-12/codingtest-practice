#include<stdio.h>
#include<string.h>

int main(void) {
	char s1[100] = "coding test";
	char s2[100];
	char s3[100];
	
	printf("s1���ڿ��� ���� : %d\n", strlen(s1));
	strcpy(s2, s1); // �׻� ������ �ڿ� �´�.
	printf("%s\n", s2);
	strcat(s2, s1);
	printf("%s\n", s2);
	printf("%d\n", strcmp("mirim", "high"));
	printf("%d\n", strcmp("mirim", "mirim"));

	//strcmp�� if�� �ȿ� ���� ���� ���̴�,.
	//if (strcmp(student[i], "XS") == 0) { //������ 0 �ƴϸ� -1 �Ǵ� 1 
	//	count[i]++;
	//}

	return 0;
}