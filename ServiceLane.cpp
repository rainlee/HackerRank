/***
 * get the minimum width between i and j
 ***/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> vwidth(n);
    for (int i = 0; i < n; ++i)
        cin >> vwidth[i];
    while (t--)
    {
        int i,j;
        cin >> i >> j;
        int minw = 3;
        for (int k = i; k <= j; ++k)
            minw = min(minw, vwidth[k]);
        cout << ((minw >= 3) ? 3 : ((minw >= 2) ? 2 : 1)) << endl;
    }
    
    return 0;
}