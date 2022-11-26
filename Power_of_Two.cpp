#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n == 1)
            n = n;
        else if (n == 0)
            n = n + 1;
        else if (n % 2 != 0)
            n = n + 1;

        cout << n << endl;
    }

    return 0;
}