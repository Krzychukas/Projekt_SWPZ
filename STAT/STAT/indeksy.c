#include "indeksy.h"
#include <math.h>
double avg(int n, int tab[])
{
	double tmp=0;
	for(int i = 0;i<n;i++)
	{
		tmp = tmp + tab[i];
	}
	tmp = tmp / n;
	return tmp;
}

double med(int n, int tab[])
{
	double tmp=0;
	if(n % 2 == 0)
	{
		tmp = (tab[n / 2] + tab[n / 2 + 1])/2;

	}
	else
	{
		tmp = tab[(n + 1) / 2];
	}

	return tmp;
}

double od_st(int n, int tab[])
{
	double tmp = 0;
	double av = avg(n, tab);
	for (int i = 0;i < n;i++)
	{
		tmp = tmp + (tab[i] - av)*(tab[i] - av) ;
	}
	tmp = tmp / 2;
	tmp = sqrt(tmp);
	return tmp;
}
