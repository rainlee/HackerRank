/***
 * two pointer low,high, move from (0, n-1) to the center
 * change the big letter to small one, eg. d -> a
 ***/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        
        int sum = 0;
        int low = 0;
        int high = s.size() - 1;
        while (low < high)
            sum += abs(s[high--] - s[low++]);
        cout << sum << endl;
    }
    return 0;
}