// if-else ���� �̿��Ͽ� Ȧ���� ¦���������Ѵ�.

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number % 2 == 0) 
		printf("�Էµ� ������ ¦���Դϴ�.\n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.\n");
}
