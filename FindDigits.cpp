#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// ���ÿһλ
// ע��0���ܱ�����
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt = 0;
        int m = n;
        while (m) {
            if ((m % 10 != 0) && (n % (m % 10) == 0))
                ++cnt;
            m /= 10;
        }
        cout << cnt << endl;
    }
    return 0;
}
