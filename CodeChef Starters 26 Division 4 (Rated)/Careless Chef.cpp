// https://www.codechef.com/START26D/problems/LOSTSEQ
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            sum = sum + x;
        }
        if (sum % 2 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}