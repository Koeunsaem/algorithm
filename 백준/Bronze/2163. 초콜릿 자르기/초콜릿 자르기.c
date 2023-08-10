#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m;
	int cleave = 0;

	scanf("%d %d", &n, &m);

	cleave = (n * m) - 1;

	printf("%d", cleave);

	return 0;
}