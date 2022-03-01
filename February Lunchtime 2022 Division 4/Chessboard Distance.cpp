#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int t = abs(x1 - x2);
        int v = abs(y1 - y2);
        int u = max(t, v);
        cout << u << endl;
    }
    return 0;
}