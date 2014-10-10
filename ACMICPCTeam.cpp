#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int strOR(string &a, string &b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); ++i)
        if ((a[i] == '1') || (b[i] == '1'))
            ++cnt;
    return cnt;
}

// 分别求或，记录最大的
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m;
    vector<string> vtopics(n);
    for (int i = 0; i < n; ++i)
        cin >> vtopics[i];
    vector<int> cnt(m+1, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int num = strOR(vtopics[i], vtopics[j]);
            ++cnt[num];
        }
    }
    for (int i = m; i >= 0; --i) {
        if (cnt[i] || (0 == i)) {
            cout << i << endl << cnt[i] << endl;
            break;
        }
    }
    return 0;
}
