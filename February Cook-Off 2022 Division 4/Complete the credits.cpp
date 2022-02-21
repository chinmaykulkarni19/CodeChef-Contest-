#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        cin >> X;
        if (X > 65)
        {
            cout << "Overload " << endl;
        }
        else if (X < 35)
        {
            cout << "Underload " << endl;
        }
        else
            cout << "Normal " << endl;
    }
    return 0;
}