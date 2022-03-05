#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        cout << arr[0] + arr[1] + arr[0] * (x - 2) << endl;
    }
    return 0;
}
