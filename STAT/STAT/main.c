#include "plik.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x[100];
	int y[100];
	plik(x, y);
	int n = sizeof(x) / sizeof(x[0]);
	for (int i = 0;i < n; i++)
	{
		printf("%d,%d\n", x[i], y[i]);
	}
}