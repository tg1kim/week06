// if ���� ����Ͽ� ���밪�� ���ϴ� ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int number;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);
	if (number < 0)
		number = -number;
	printf("���밪�� %d�Դϴ�.\n", number);
}