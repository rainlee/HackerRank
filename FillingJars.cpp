/***
 * simulate the operations
 * dont need to save jars[N]
 * just save the total numbers
 ***/
#include <iostream>
#include <vector>
//#include <cmath>
#include <cassert>
using namespace std;

int main()
{
    long long N, M;
    long long a, b, k;
    cin >> N >> M;
    assert((N >= 3) && (N <= 10000000));
    assert((M >= 1) && (M <= 100000));
    
    //vector<int> vjars(N, 0);
    long long sum = 0;
    while (M--)
    {
        cin >> a >> b >> k;
        //for (int i = a; i <= b; ++i)
        //    vjars[i] += k;
        //a = max(a, 1);
        //b = min(b, N);
        assert((a >= 1) && (a <=  b) && (b <= N));
        assert((k >= 0) && (k <= 1000000));
        sum += (b - a + 1) * k;
    }
    cout << sum / N << endl;
    return 0;
}