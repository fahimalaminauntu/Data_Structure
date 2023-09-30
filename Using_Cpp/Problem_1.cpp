#include <iostream>

using namespace std;

int main()
{
    int t, a, b, n, sec;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sec = 0;
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
                {
                    b = a;
                }
            }
            else
            {
                b = 0;
            }
        }
        cout << sec << endl;
    }
    return 0;
}
