// https://www.codechef.com/START26D/problems/SMOKE
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int smoke = 0;
        while (n >= 100)
        {
            int bussmoke = x;
            int carsmoke = 25 * x;
            smoke = smoke + min(bussmoke, carsmoke);
            n = n - 100;
        }
        if (n > 0)
        {
            int car = ceil(n / 4.0);
            int carsmoke = car * y;
            int bussmoke = x;
            smoke = smoke + min(bussmoke, carsmoke);
        }
        cout << smoke << endl;
    }
    return 0;
}