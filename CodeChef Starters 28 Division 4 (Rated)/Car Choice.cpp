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
        cin >> x1 >> x2 >> y1 >> y2;
        float a, b, c, d;
        float res1, res2;
        a = x1;
        b = x2;
        c = y1;
        d = y2;
        res1 = (c) / (a);
        res2 = (d) / (b);
        if (res1 < res2)
            cout << "-1" << endl;
        else if (res1 > res2)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}