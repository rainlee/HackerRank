#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// �Ȱ�10^10���ڵ�Fibonacci���������
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a = 0, b = 1, c = 0;
        while ((c = a + b) < n) {
            a = b;
            b = c;
        }
        cout << ((c == n) ? "IsFibo" : "IsNotFibo") << endl;
    }
       
    return 0;
}
