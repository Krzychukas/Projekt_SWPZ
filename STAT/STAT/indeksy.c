#include "indeksy.h"

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
	double tmp;
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
