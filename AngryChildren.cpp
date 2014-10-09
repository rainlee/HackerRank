#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++)
        cin >> candies[i];
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    // ������Ȼ�����һ�飬������k������֮�����Сֵ
    sort(candies, candies + N);
    unfairness = INT_MAX;
    for (int i = 0; i < N-K; ++i)
        unfairness = min(unfairness, candies[i+K-1] - candies[i]);
    cout << unfairness << "\n";
    return 0;
}
