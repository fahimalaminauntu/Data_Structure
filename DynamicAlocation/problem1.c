#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    double *p;
    for (int i = 0; i < 5; i++)
    {
        ptr = (int *)malloc(sizeof(int));
        p = (double *)malloc(sizeof(double));
        printf("%d\n", ptr);
        printf("%d\n", p);
    }
}
