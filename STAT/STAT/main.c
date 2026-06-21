#include "plik.h"
#include "indeksy.h"
#include <stdlib.h>
#include <stdio.h>
#include "zaleznosci.h"

int main()
{
	int x[100];
	int y[100];
	int n = sizeof(x) / sizeof(x[0]);
	plik(x, y);
	int m = 0;
	printf("co chcesz obliczyc?\n srednia arytmetyczn (1) \n mediana (2) \n odchylenie standardowe (3)\n regresja liniowa (4)\n   ");
	scanf_s("%d", &m);
	switch (m) {
	case 1:
		printf("X:%.lf\nY:%.lf", avg(n, x), avg(n, y));
		break;
	case 2:
		printf("X:%.lf\nY:%.lf", med(n, x), med(n, y));
		break;
	case 3:
		printf("X:%.lf\nY:%.lf", od_st(n, x), od_st(n, y));
		break;
	case 4:
		reglin(n, x, y);
		printf("\nzbieznosc liniowa: %.lf", Pearson(n, x, y));
		break;
	}
	return 0;
}