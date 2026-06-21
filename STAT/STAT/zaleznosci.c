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

float SSxy(int n, int x[], int y[])
{
	int tmp = 0;
	int avx = avg(n, x);
	int avy = avg(n, y);
	for (int i = 0; i < n;i++)
	{
		tmp = tmp + (x[i] - avx) * (y[i] - avy);
	}
	return tmp;
}

float Pearson(int n, int x[], int y[])
{
	float pear = SSxy(n, x, y) / (sqrt(SS(n, x) * SS(n, y))) ;
	return pear;
}
