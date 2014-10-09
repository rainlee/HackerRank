#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    int imin = 0;
    while (imin < n) {
        cout << (n - imin) << endl;
        int minv = a[imin];
        for (int i = imin; i < n; ++i){
            a[i] -= minv;
            if (a[i] == 0)
               imin = i + 1; 
        }
    }
    
    return 0;
}
