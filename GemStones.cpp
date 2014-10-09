#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// n¸östringÇó½»
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    if (n <= 0) cout << 0 << endl;
    string s;
    vector<bool> bgem1(26, false);
    for (int k = 0; k < n; ++k)
    {
        vector<bool> bgem2(26, false);
        cin >> s;
        for (int i = 0; i < s.size(); ++i)
            bgem2[s[i] - 'a'] = true;
        if (k == 0)
            bgem1 = bgem2;
        else
        {
            for (int i = 0; i < 26; ++i)
                bgem1[i] = bgem1[i] && bgem2[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < 26; ++i)
        if (bgem1[i])
        ++cnt;
    cout << cnt << endl;
        
    return 0;
}
