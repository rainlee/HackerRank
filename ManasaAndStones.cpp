/***
 * last num = a*x + b*y
 * x + y = n-1
 ***/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        set<int> snum;       // sort
        for (int i = 0; i < n; ++i)
            snum.insert(i*a + (n-i-1)*b);
        
        for (set<int>::iterator it = snum.begin(); it != snum.end(); ++it)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}