#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if ((A + C) > B)
            cout << (A + C) << endl;
        else
            cout << B << endl;
    }
    return 0;
}