#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *table;
    int size;
    printf("What is the size of the table?");
    scanf("%d", &size);
    printf("\n");
    if ((table = (int *)malloc(size * sizeof(int))) == NULL)
    {
        printf("No space Available\n");
        exit(1);
    }
    printf("\n Address of the first byte is %p\n", (void *)table);
    printf("\nInput table value\n");
    for (p = table; p < table + size; p++)
        scanf("%d", p);
    for (p = table + size - 1; p >= table; p--)
        printf("%d is stored at address %p\n", *p, (void *)p);

   
    free(table);

    return 0;
}
