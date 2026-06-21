#include "zaleznosci.h"
#include "indeksy.h"
#include "math.h"

float SS(int n, int a[])
{
	int tmp = 0;
	int av = avg(n, a);
	for (int i = 0; i < n;i++)
	{
		tmp = tmp + (a[i] - av) * (a[i] - av);
	}
	return tmp;
}

float Pearson(int n, int x[], int y[])
{
	return 0.0f;
}
