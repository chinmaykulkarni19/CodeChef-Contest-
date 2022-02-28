#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0)
            {
                continue;
            }

            if (i % 3 == 1)
            {
                arr[i] = arr[i - 1] * 2;
            }

            else
            {
                if (i + 1 < n)
                    arr[i] = arr[i + 1] * 2;
                else
                    arr[i] = arr[i - 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}