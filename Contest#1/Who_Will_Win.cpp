// Who Will Win?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << "Argentina" << endl;
    else if (a == b)
        cout << "Draw" << endl;
    else
        cout << "Brazil" << endl;

    return 0;
}