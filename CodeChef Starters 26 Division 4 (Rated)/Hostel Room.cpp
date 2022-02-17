// https://www.codechef.com/START26D/problems/HOSTELROOM
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = x;
        int curr = x;
        for (int i = 0; i < n; i++)
        {
            curr = curr + a[i];
            maxi = max(curr, maxi);
        }
        cout << maxi << endl;
    }
    return 0;
}