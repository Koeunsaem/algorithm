#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, mul;
	int arr[10] = { 0, };

	scanf(" %d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);

	mul = a * b * c;
	int tmp;

	for (int i = 0; mul > 0; i++)
	{
		tmp = mul % 10;
		arr[tmp]++;
		mul /= 10;
	}

	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", arr[j]);
	}

	return 0;
}
