// https://www.codechef.com/START26D/problems/TRAVELFAST
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X < Y)
        {
            cout << "BIKE" << endl;
        }
        else if (X == Y)
        {
            cout << "SAME" << endl;
        }
        else
        {
            cout << "CAR" << endl;
        }
    }
    return 0;
}