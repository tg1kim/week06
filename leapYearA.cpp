// ���� �Ǵ� ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int year;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 || year % 400 == 0)
		printf("%d���� �����Դϴ�.\n", year);
	else 
		printf("%d���� ������ �ƴմϴ�.\n", year);
}
