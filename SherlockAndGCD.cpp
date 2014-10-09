#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// ��gcd(a,b) = 1�����Ӽ�{a,b}��������
// ��gcd(a,b) = 1����gcd(a,b,c,d,...) = 1
// ֱ���������Ԫ�ص�gcd����Ϊ1 ��yes
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a, g = 0;
        while (n--){
            cin >> a;
            g = gcd(g, a);
        }
        if (g == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
