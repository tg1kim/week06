// ������ ��� ���� ���α׷�

#include <stdio.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ�\n(��: 2 + 5)\n>> ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else 
		printf("�������� �ʴ� �������Դϴ�.\n");

	printf("%d %c %d = %d\n", x, op, y, result);
}