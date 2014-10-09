#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// ������n/2����������n-n/2
// ע�����뷶Χ��ʹ��long long
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
