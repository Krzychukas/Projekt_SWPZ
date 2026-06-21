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
