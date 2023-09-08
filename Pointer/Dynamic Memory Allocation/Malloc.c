#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1, *ptr2;
    ptr1 = malloc(6 * sizeof(int));
    ptr2 = calloc(5, sizeof(int));
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Memory Not Allocated.\n");
    }
    else
    {
        printf("Memory Allocated Successfull.\n");
        // Free
        // free(ptr);
        // printf("Memory Clean Successfully.");
        // Realloc-
        realloc(ptr1, 100);
        printf("Memory Allocation Successfull .");
    }
    return 0;
}