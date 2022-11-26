// Difference
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    int a, b, difference1 = 0, difference2 = 0;
    cin >> a >> b;

    if (a < b)
    {
        swap(b, a);
        difference1 = a - b;
        cout << difference1 << endl;
    }
    else
    {
        difference2 = a - b;
        cout << difference2 << endl;
    }

    return 0;
}