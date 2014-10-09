#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// 直接开方求出左右边界
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << (floor(sqrt(b)) - ceil(sqrt(a)) + 1) << endl;
    }
        
    return 0;
}
