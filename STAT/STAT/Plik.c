#include "plik.h"
#include <stdio.h>
#include <stdlib.h>

void plik(int x[], int y[])
{

    FILE* my_file = fopen("data.csv","r");   
    size_t count = 0;
    do 
    {
        int got = fscanf(my_file, "%d,%d", &x[count], &y[count]);
        if (got != 2) break; 
        count = count + 1;
    } while ( count >=0);
    fclose(my_file);

}
