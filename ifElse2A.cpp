// �������� �ϱ� ���� �и� 0������ if-else ���� �̿��Ͽ� �˻�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	int n, d, result;

	printf("���ڿ� �и� �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &d);

	if (d == 0) 
		printf("0���� ���� ���� �����ϴ�.\n");
	else {
		result = n / d;
		printf("����� %d�Դϴ�.\n", result);
	}
}