// https://www.codechef.com/START26D/problems/VALENTINE
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, p;
        cin >> X >> Y;
        if (Y > X)
            cout << 0 << endl;
        else
        {
            p = X / Y;
            cout << p << endl;
        }
    }
    return 0;
}