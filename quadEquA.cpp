#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996 4326 6031)

void main() 
{
	double a, b, c, dis;
	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0)
		printf("�������� ���� %f�Դϴ�.", -c / b);
	else {
		dis = b * b - 4.0 * a * c;
		if (dis >= 0) {
			printf("�������� ���� %.2f�Դϴ�.\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("�������� ���� %.2f�Դϴ�.\n", (-b - sqrt(dis)) / (2.0 * a));
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�\n");
	}
}