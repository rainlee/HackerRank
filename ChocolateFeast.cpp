#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// k = n/c是基本的巧克力数
// k个包装又可以换k/m个，不断迭代，直到换不了了
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        int choc = n / c;
        int wrap = choc;
        answer += choc;
        while (wrap >= m){
            choc = wrap / m;
            answer += choc;
            wrap = (wrap % m) + choc;  // left + new
        }
        cout<<answer<<endl;
    }
    return 0;
}
