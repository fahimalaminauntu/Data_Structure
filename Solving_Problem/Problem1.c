#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, n, sec = 0;
        scanf("%d%d%d", &a, &b, &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        int j = 0;
        while (b != 0)
        {
            if (b > 1)
            {
                b--;
                sec++;
            }
            else if (b == 1 && j < n)
            {
                b += arr[j] - 1;
                sec++;
                j++;
                if (b >= a)
                    b = a;
            }
            else
                b = 0;
        }
        printf("%d\n", sec);
    }
    return 0;
}