#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 统计计数，奇数个字符不能超过2个
int main() {
   
    string s;
    cin>>s;
     
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    vector<bool> vcnt(26, false);
    for (int i = 0; i < s.size(); ++i)
        vcnt[s[i]-'a'] = !vcnt[s[i]-'a'];
    int cnt = 0;
    for (int i = 0; i < 26; ++i)
        if (vcnt[i])
            ++cnt;
    
    if(cnt > 1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
