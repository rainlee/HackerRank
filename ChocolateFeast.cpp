#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// k = n/c�ǻ������ɿ�����
// k����װ�ֿ��Ի�k/m�������ϵ�����ֱ����������
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
