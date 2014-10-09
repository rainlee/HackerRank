#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
// 数据很弱，O(n^2)也能过
int maxXor_1(int l, int r) {
    int maxx = 0;
    for (int i = l; i < r; ++i)
        for (int j = i+1; j <= r; ++j)
            maxx = max(maxx, i^j);
    return maxx;
}

// O(1)的解法
// 2^((L XOR R).bit_length) - 1
// 找出L和R最左边第一个不同的bit
int maxXor_2(int l, int r) {
    for (int i = 31; i >= 0; i--) 
        if (((1 << i) & l) ^ ((1 << i) & r))
            return (1 << (i + 1)) - 1;
    return 0;
}

int maxXor_1(int l, int r) {
    return maxXor(l, r);
}
int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
