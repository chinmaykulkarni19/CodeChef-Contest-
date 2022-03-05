#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int t = x * 10 + y * 5;
        cout << t << endl;
    }
    return 0;
}