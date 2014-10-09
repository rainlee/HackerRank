#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// 横着切n/2刀，竖着切n-n/2
// 注意输入范围，使用long long
long long halloweenParty(int n)
{
    return (long long)n/2 * (n - n/2);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << halloweenParty(n) << endl;
    }
    return 0;
}
