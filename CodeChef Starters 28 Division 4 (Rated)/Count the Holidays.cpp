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
        int res = 8;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 6 && a[i] != 7 && a[i] != 13 && a[i] != 14 && a[i] != 20 && a[i] != 21 && a[i] != 27 && a[i] != 28)
            {
                res += 1;
            }
        }

        cout << res << endl;
    }
    return 0;
}