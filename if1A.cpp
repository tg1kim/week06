#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int number;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);
	if (number > 0) 
		printf("����Դϴ�.\n");
	printf("�Էµ� ���� %d�Դϴ�.\n", number);
}