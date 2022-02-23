#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int l = 21 - (a + b);
        if (l > 10)
            cout << -1 << endl;
        else
            cout << l << endl;
    }
    return 0;
}