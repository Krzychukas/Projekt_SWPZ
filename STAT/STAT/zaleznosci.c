#include "zaleznosci.h"
#include "indeksy.h"
#include "math.h"
#include "stdio.h"

float SS(int n, int a[])
{
	float tmp = 0;
	float av = avg(n, a);
	for (int i = 0; i < n;i++)
	{
		tmp = tmp + (a[i] - av) * (a[i] - av);
	}
	return tmp;
}

float SSxy(int n, int x[], int y[])
{
	int tmp = 0;
	float avx = avg(n, x);
	float avy = avg(n, y);
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

float reglin(int n, int x[], int y[])
{
	float a = SSxy(n, x, y) / SS(n, x);
	float avx = avg(n, x);
	float avy = avg(n, y);
	float b = avy - a * avy;
	printf("regresja liniowa:\n y = %lf*x + %lf", a, b);
		return a;
}